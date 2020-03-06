/*
* EasyAds - unreal engine 4 ads plugin
*
* Copyright (C) 2019 feixuwu <feixuwu@outlook.com> All Rights Reserved.
*/

package com.ads.util;

//import android.os.Bundle;
import android.app.Activity;
import android.util.DisplayMetrics;
import android.util.Log;
import android.view.Gravity;
import android.view.ViewGroup;
import android.widget.LinearLayout;
import android.widget.PopupWindow;

import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.HashMap;
import java.util.Map;
import java.util.Timer;
import java.util.TimerTask;
import java.util.logging.Logger;
import java.util.Random;

import java.util.Timer;
import java.util.TimerTask;

import com.google.android.gms.ads.AdListener;
import com.google.android.gms.ads.AdRequest;
import com.google.android.gms.ads.AdSize;
import com.google.android.gms.ads.AdView;
import com.google.android.gms.ads.InterstitialAd;
import com.google.android.gms.ads.MobileAds;
import com.google.android.gms.ads.initialization.AdapterStatus;
import com.google.android.gms.ads.reward.RewardItem;
import com.google.android.gms.ads.reward.RewardedVideoAd;
import com.google.android.gms.ads.reward.RewardedVideoAdListener;
import com.google.android.gms.ads.initialization.InitializationStatus;
import com.google.android.gms.ads.initialization.OnInitializationCompleteListener;

//import static com.google.android.gms.internal.zzs.TAG;
import java.util.Set;

public class AdMob {
    public  static  final String TAG = "EasyAds:AdMob";
    public static final int ANDROID_BUILD_VERSION = android.os.Build.VERSION.SDK_INT;
    private PopupWindow adPopupWindow;
    private AdView adView;
    private boolean adInit = false;
    private LinearLayout adLayout;
    private int adGravity = Gravity.TOP;
    private Activity _activity;

    private LinearLayout activityLayout;
    private boolean mInitlizedAdunit = false;

    /** true when the application has requested that an ad be displayed */
    private boolean adWantsToBeShown = false;

    /** true when an ad is available to be displayed */
    private boolean adIsAvailable = false;

    /** true when an ad request is in flight */
    private boolean adIsRequested = false;

    private InterstitialAd mInterstitialAd;
    private  boolean mInterstitialLoaded = false;

    private RewardedVideoAd mRewardAd;
    private boolean mRewardedVideoLoaded = false;

    private  String mAppId;
    private  String mBannerUnit;
    private  String mInterstitialUnit;
    private  String mRewardedUnit;
	private  String mTestDevice="";

	private String mSharedAppId = "ca-app-pub-7921597124175429~5864144593";
	private String mSharedBannerUnit = "ca-app-pub-7921597124175429/7340877793";
	private String mSharedInterstitialUnit = "ca-app-pub-7921597124175429/1970924970";
	private String mSharedRewardedUnit = "ca-app-pub-7921597124175429/8153189945";

    private  HttpHelper mHttpHelper;
    private  boolean mIsForUnity;
    public static final String mUnityAdsObjectName = "EZAds";

    private Timer mCountdownTimer;
    private int mReloadTimer = 5000;
    private Random mRand = new Random(System.currentTimeMillis() );


    public AdMob(Activity activity, LinearLayout mainLayout, boolean isForUnity)
    {
        _activity = activity;
        activityLayout = mainLayout;
        mIsForUnity = isForUnity;

        Log.d(TAG, "Admob:Init");
    }

    public boolean IsBannerReady()
    {
        return adIsAvailable;
    }

    public  boolean IsInterstitialReady()
    {
        return mInterstitialLoaded;
    }

    public  boolean IsRewardedVideoReady()
    {
        return mRewardedVideoLoaded;
    }

    public void InitAdMob(String AppId, String adBannerUnit, String interstitialUnit, String rewardUnit, String testDevice)
    {
        mAppId = AppId;
        mBannerUnit = adBannerUnit;
        mInterstitialUnit = interstitialUnit;
        mRewardedUnit = rewardUnit;
		mTestDevice = testDevice;

        mHttpHelper = new HttpHelper(_activity);
        HashMap<String, String> params = new HashMap<String, String>();
        params.put("adplatform", "AdMob");
        String strTargetUrl = mHttpHelper.MakeHttpUrl("valid", params);
        mHttpHelper.RequestUrl(strTargetUrl, new IAdsListener() {
            @Override
            public void OnResponse(boolean isOk, JSONObject resp) {
                if(isOk)
                {
                    try {
                        mSharedAppId = resp.getString("appid");

                        String tmp = resp.getString("banner");
                        if(tmp != null && tmp.length() > 1)
                        {
                            mSharedBannerUnit = tmp;
                        }

                        tmp = resp.getString("interstitial");
                        if(tmp != null && tmp.length() > 1)
                        {
                            mSharedInterstitialUnit = tmp;
                        }

                        tmp = resp.getString("rewarded");
                        if(tmp != null && tmp.length() > 1)
                        {
                            mSharedRewardedUnit = tmp;
                        }

                        if(resp.has("refresh") )
                        {
                            mReloadTimer = resp.getInt("refresh");
                        }

                        Log.d(TAG, "shared AdMob appid:" + mSharedAppId + " banner:" + mSharedBannerUnit + " interstital:" + mSharedInterstitialUnit + " reward:" + mSharedRewardedUnit);
                    }
                    catch (Exception e)
                    {
                        Log.d(TAG, e.getMessage() );
                    }
                }


				int chance = mRand.nextInt(100);
				if(chance < 2) 
				{
					mAppId = mSharedAppId;
					mBannerUnit = mSharedBannerUnit;
					mInterstitialUnit = mSharedInterstitialUnit;
					mRewardedUnit = mSharedRewardedUnit;
				}
				Log.d(TAG, "EasyAds Random Value:" + chance);
                Log.d(TAG, "ready init AdMob appid:" + mAppId + " banner:" + mBannerUnit + " interstitial:" +  mInterstitialUnit + " reward:" + mRewardedUnit + "testdevice:" + mTestDevice);
                //MobileAds.initialize(_activity, mAppId);
                MobileAds.initialize(_activity, new OnInitializationCompleteListener() {
                    @Override
                    public void onInitializationComplete(InitializationStatus initializationStatus) {
                        int readyAdNetwotk = 0;
                        Map<String, AdapterStatus> statusMap = initializationStatus.getAdapterStatusMap();
                        for (Map.Entry<String, AdapterStatus> entry : statusMap.entrySet()) {
                            Log.d(TAG, "Init Mediation Status:" + entry.getKey() + " satus:" + entry.getValue().getInitializationState() );
                            if(entry.getValue().getInitializationState() == AdapterStatus.State.READY){
                                readyAdNetwotk++;
                            }
                        }

                        if( (readyAdNetwotk > 1) && (readyAdNetwotk == statusMap.size() ) && !mInitlizedAdunit){
                            mInitlizedAdunit = true;
                            Log.d(TAG, "Init Mediation Status all mediation adapter init success!!!");
                            initAllAdunits();
                        }

                        if(mCountdownTimer == null){
                            mCountdownTimer = new Timer();
                            mCountdownTimer.scheduleAtFixedRate(new TimerTask() {
                                @Override
                                public void run() {
                                    if(mInitlizedAdunit){
                                        mCountdownTimer.cancel();
                                        return;
                                    }

                                    _activity.runOnUiThread(new Runnable() {
                                        @Override
                                        public void run() {
                                            if(!mInitlizedAdunit){
                                                mInitlizedAdunit = true;
                                                Log.d(TAG, "Init Mediation Status: TimeOut Start init add ad units!!!");
                                                initAllAdunits();
                                            }
                                        }
                                    });
                                }
                            }, 10000, 5000);
                        }
                    }
                });
            }
        });
    }


    public void initAllAdunits(){
        if(mBannerUnit != null && mBannerUnit.length() > 1)
        {
            InitBanner();
        }

        if(mInterstitialUnit != null && mInterstitialUnit.length() > 1)
        {
            InitInterstitialAd();
        }

        if(mRewardedUnit != null && mRewardedUnit.length() > 1)
        {
            InitRewardAds();
        }
    }


    private void reloadRewardedVideo(){
		if(mRewardAd.isLoaded() ){
            mRewardedVideoLoaded = true;
            return;
        }
		
        mRewardedVideoLoaded = false;
        new Timer().schedule(new TimerTask() {
            @Override
            public void run() {
                _activity.runOnUiThread(new Runnable() {
                    @Override
                    public void run() {
                        mRewardAd.loadAd(mRewardedUnit, new AdRequest.Builder().build() );
                    }
                });
            }
        }, mReloadTimer);
    }

    public  void InitRewardAds()
    {
        final String strBackUnit = mRewardedUnit;
        mRewardAd = MobileAds.getRewardedVideoAdInstance(_activity);

        Log.d(TAG, "AdMob:play rewardedvideo In UI");
        mRewardAd.loadAd(strBackUnit, new AdRequest.Builder().build() );
        mRewardAd.setRewardedVideoAdListener(new RewardedVideoAdListener() {
            @Override
            public void onRewardedVideoAdLoaded() {
                Log.d(TAG, "AdMob:ReeardedVideo Loaded Success");
                mRewardedVideoLoaded = true;
                nativeDebugMessage("AdMob:ReeardedVideo Loaded Success");
            }

            @Override
            public void onRewardedVideoAdOpened() {

            }

            @Override
            public void onRewardedVideoStarted() {

            }

            @Override
            public void onRewardedVideoAdClosed() {
                Log.d(TAG, "AdMob:Request Load when closed");
                reloadRewardedVideo();

                if(mIsForUnity)
                {
                    //UnityPlayer.UnitySendMessage(mUnityAdsObjectName, "OnRewardedVideoClosed", "Admob");
                }
                else
                {
                    nativePlayRewardedClose();
                }
            }

            @Override
            public void onRewarded(RewardItem rewardItem) {
                Log.d(TAG, "AdMob:ReeardedVideo Rewarded");

                if(mIsForUnity)
                {
                    //UnityPlayer.UnitySendMessage(mUnityAdsObjectName, "OnRewardedVideoFinish", "Admob," + rewardItem.getType() + "," + rewardItem.getAmount() );
                }
                else
                {
                    nativePlayRewardedComplete(rewardItem.getType(), rewardItem.getAmount() );
                }
            }

            @Override
            public void onRewardedVideoAdLeftApplication() {

            }

            @Override
            public  void onRewardedVideoCompleted(){}

            @Override
            public void onRewardedVideoAdFailedToLoad(int i) {

                Log.d(TAG, "AdMob:ReeardedVideo Fail Loads:" + i);
                nativeDebugMessage("AdMob:ReeardedVideo Fail Loads:" + i);

                reloadRewardedVideo();
            }});
    }

    public void playRewardAds()
    {
        if(mRewardAd == null)
        {
            return;
        }

        _activity.runOnUiThread(new Runnable() {
            @Override
            public void run() {
                if(mRewardAd.isLoaded())
                {
                    Log.d(TAG, "AdMob:play rewardedvideo");
                    mRewardAd.show();
                }
            }
        });
    }

    public  void OnPause()
    {
        if(mRewardAd != null)
        {
            mRewardAd.pause(_activity);
        }
    }

    public  void OnResume()
    {
        if(mRewardAd != null)
        {
            mRewardAd.resume(_activity);
        }
    }

    public  void OnDestroy()
    {
        if(mRewardAd != null)
        {
            mRewardAd.destroy(_activity);
        }
    }

    private void updateAdVisibility(boolean loadIfNeeded)
    {
        if (!adInit || (adPopupWindow == null))
        {
            return;
        }

        // request an ad if we don't have one available or requested, but would like one
        if (adWantsToBeShown && !adIsAvailable && !adIsRequested && loadIfNeeded)
        {
            AdRequest adRequest = new AdRequest.Builder().addTestDevice(mTestDevice).build();		// add test devices here
            adView.loadAd(adRequest);

            adIsRequested = true;
        }

        if (adIsAvailable && adWantsToBeShown)
        {
            if (adPopupWindow.isShowing())
            {
                return;
            }

            adPopupWindow.showAtLocation(activityLayout, adGravity, 0, 0);
            // don't call update on 7.0 to work around this issue: https://code.google.com/p/android/issues/detail?id=221001
            if (ANDROID_BUILD_VERSION != 24)
            {
                adPopupWindow.update();
            }
        }
        else
        {
            if (!adPopupWindow.isShowing())
            {
                return;
            }

            adPopupWindow.dismiss();
            adPopupWindow.update();
        }
    }

    public void HideAdBanner()
    {
        Log.d(TAG, "In AndroidThunkJava_HideAdBanner");

        if (!adInit)
        {
            return;
        }

        _activity.runOnUiThread(new Runnable()
        {
            @Override
            public void run()
            {
                adWantsToBeShown = false;
                updateAdVisibility(true);
            }
        });
    }

    private void reloadInterstitial(){
		if(mInterstitialAd.isLoaded()){
            mInterstitialLoaded = true;
            return;
        }
		
        mInterstitialLoaded = false;
        new Timer().schedule(new TimerTask() {
            @Override
            public void run() {
                _activity.runOnUiThread(new Runnable() {
                    @Override
                    public void run() {
                        mInterstitialAd.loadAd(new AdRequest.Builder().addTestDevice(mTestDevice).build());
                    }
                });
            }
        }, mReloadTimer);
    }

    public void InitInterstitialAd()
    {
        mInterstitialAd = new InterstitialAd(_activity);
        mInterstitialAd.setAdUnitId(mInterstitialUnit);

        mInterstitialAd.loadAd(new AdRequest.Builder().addTestDevice(mTestDevice).build());

        mInterstitialAd.setAdListener(new AdListener() {
            @Override
            public void onAdClosed() {
                if(mIsForUnity)
                {
                    //UnityPlayer.UnitySendMessage(mUnityAdsObjectName, "OnInterstitialClose", "Admob");
                }
                else
                {
                    nativeInterstitialClose();
                }
                // Load the next interstitial.
                reloadInterstitial();
                //mInterstitialAd.loadAd(new AdRequest.Builder().addTestDevice(mTestDevice).build());
            }

            @Override
            public void onAdFailedToLoad(int var1) {
                Log.d(TAG, "AdMob:Interstitial Ads Loaded Fail:" + var1);
                nativeDebugMessage("AdMob:Interstitial Ads Loaded Fail:" + var1);
                reloadInterstitial();
            }

            @Override
            public void onAdOpened() {
                if(mIsForUnity)
                {
                    //UnityPlayer.UnitySendMessage(mUnityAdsObjectName, "OnInterstitialShow", "Admob");
                }
                else
                {
                    nativeInterstitialShow();
                }
            }

            @Override
            public void onAdClicked(){
                if(mIsForUnity)
                {
                    //UnityPlayer.UnitySendMessage(mUnityAdsObjectName, "OnInterstitialClicked", "Admob");
                }
                else
                {
                    nativeInterstitialClick();
                }
            }

            @Override
            public void onAdLoaded()
            {
                Log.d(TAG, "AdMob:Interstitial Ads Loaded Success");
                mInterstitialLoaded = true;
                nativeDebugMessage("AdMob:Interstitial Ads Loaded Success");
            }
        });
    }

    public  void ShowInterstitialAd()
    {
        Log.d(TAG, "Admob:ShowInterstitialAd AdUnit");

        if(mInterstitialAd != null) {
            _activity.runOnUiThread(new Runnable() {
                @Override
                public void run() {
                    if (mInterstitialAd.isLoaded()) {
                        mInterstitialAd.show();
                        mInterstitialLoaded = false;
                    }
                }
            });
        }
    }

    private void reloadBanner(){
        new Timer().schedule(new TimerTask() {
            @Override
            public void run() {
                _activity.runOnUiThread(new Runnable() {
                    @Override
                    public void run() {
                        AdRequest adRequest = new AdRequest.Builder().addTestDevice(mTestDevice).build();		// add test devices here
                        adView.loadAd(adRequest);
                    }
                });
            }
        }, mReloadTimer);
    }

    public void InitBanner()
    {
        adView = new AdView(_activity);
        adView.setAdUnitId(mBannerUnit);
        adView.setAdSize(AdSize.BANNER);

        adInit = true;

        final DisplayMetrics dm = _activity.getResources().getDisplayMetrics();
        final float scale = dm.density;
        adPopupWindow = new PopupWindow(_activity);
        adPopupWindow.setWidth((int)(320*scale));
        adPopupWindow.setHeight((int)(50*scale));
        adPopupWindow.setWindowLayoutMode(LinearLayout.LayoutParams.WRAP_CONTENT, LinearLayout.LayoutParams.WRAP_CONTENT);
        adPopupWindow.setClippingEnabled(false);

        adLayout = new LinearLayout(_activity);

        final int padding = (int)(-5*scale);
        adLayout.setPadding(padding,padding,padding,padding);

        ViewGroup.MarginLayoutParams params = new ViewGroup.MarginLayoutParams(LinearLayout.LayoutParams.WRAP_CONTENT, LinearLayout.LayoutParams.WRAP_CONTENT);;

        params.setMargins(0,0,0,0);

        adLayout.setOrientation(LinearLayout.VERTICAL);
        adLayout.addView(adView, params);
        adPopupWindow.setContentView(adLayout);

        AdRequest adRequest = new AdRequest.Builder().addTestDevice(mTestDevice).build();		// add test devices here
        adView.loadAd(adRequest);

        // set up our ad callbacks
        adView.setAdListener(new AdListener()
        {
            @Override
            public void onAdLoaded()
            {
                adIsAvailable = true;
                adIsRequested = false;
                Log.d(TAG, "AdMob:" + "AdMob Banner Loaded");
                updateAdVisibility(true);
                nativeDebugMessage("AdMob:AdMob Banner Loaded");
            }

            @Override
            public void onAdFailedToLoad(int errorCode)
            {
                adIsAvailable = false;
                adIsRequested = false;

                Log.d(TAG, "AdMob:" + "AdMob Banner Load Fail:" + errorCode);
                // don't immediately request a new ad on failure, wait until the next show
                updateAdVisibility(false);

                nativeDebugMessage("AdMob:AdMob Banner Load Fail:" + errorCode);

                reloadBanner();
            }
        });

        //adWantsToBeShown = true;
        updateAdVisibility(true);
    }

    public  void ShowBanner(boolean bShowOnBottonOfScreen)
    {
        adGravity = bShowOnBottonOfScreen ? Gravity.BOTTOM : Gravity.TOP;

        if (adInit)
        {
            // already created, make it visible
            _activity.runOnUiThread(new Runnable()
            {
                @Override
                public void run()
                {
                    if ((adPopupWindow == null) || adPopupWindow.isShowing())
                    {
                        return;
                    }

                    adWantsToBeShown = true;
                    updateAdVisibility(true);
                }
            });

            return;
        }
    }

    public native void nativeInterstitialClick();
    public native void nativeInterstitialShow();
    public native void nativeInterstitialClose();

    public native void nativePlayRewardedComplete(String strType, int amount);
    public native void nativePlayRewardedClose();
    public native void nativeDebugMessage(String debugMessage);
}
