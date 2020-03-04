/*
* EasyAds - unreal engine 4 ads plugin
*
* Copyright (C) 2019 feixuwu <feixuwu@outlook.com> All Rights Reserved.
*/

package com.ads.util;

import android.app.Activity;
import android.provider.Settings;
import android.util.Log;

import org.json.JSONObject;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.util.HashMap;

import static android.provider.ContactsContract.CommonDataKinds.Website.URL;

import com.android.volley.Request;
import com.android.volley.RequestQueue;
import com.android.volley.Response;
import com.android.volley.VolleyError;
import com.android.volley.toolbox.StringRequest;
import com.android.volley.toolbox.Volley;

/**
 * Created by feixu on 2017/6/22.
 */

public class HttpHelper {
    public  static  final String TAG = "EasyAds";
    private RequestQueue queue;
    public final static String mHttpServer = "https://adsshare.org";
    String mStrPackageName;

    public HttpHelper(Activity activity)
    {
        mStrPackageName = activity.getPackageName();
        queue = Volley.newRequestQueue(activity);
    }

    public String MakeHttpUrl(String urlName, HashMap<String, String> params)
    {
        String strRet="";

        boolean isFist = true;
        for(String key:params.keySet())
        {
            if(!isFist)
            {
                strRet += "&";
            }
            strRet += key + "=" + params.get(key);
            isFist = false;
        }

        if(params.size() > 0)
        {
            strRet += "&";
        }
        strRet += "packageName=" + mStrPackageName;
        strRet += "&os=Android&market=1";

        Log.d(TAG, "queryurl:" + strRet);
        return mHttpServer + "/" + urlName + "?" + strRet;
    }

    public JSONObject RequestUrl(String url, final IAdsListener listener)
    {
        StringRequest stringRequest = new StringRequest(Request.Method.GET, url,
                new Response.Listener<String>() {
                    @Override
                    public void onResponse(String response) {
                        JSONObject respobj = null;
                        boolean isOk = false;
                        try {
                            respobj = new JSONObject(response);
                            isOk = respobj.getInt("ret") == 0;
                        }
                        catch (Exception e)
                        {
                            listener.OnResponse(false, respobj);
                            return;
                        }
                        listener.OnResponse(isOk, respobj);
                    }
                }, new Response.ErrorListener() {
            @Override
            public void onErrorResponse(VolleyError error) {
                Log.d(TAG, "Http Invalid Error Response");
				listener.OnResponse(false, null);
            }
        });
// Add the request to the RequestQueue.
        queue.add(stringRequest);

        return null;
    }
}
