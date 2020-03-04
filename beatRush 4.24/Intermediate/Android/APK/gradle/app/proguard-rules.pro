# To enable ProGuard in your project, edit project.properties
# to define the proguard.config property as described in that file.
#
# Add project specific ProGuard rules here.
# By default, the flags in this file are appended to flags specified
# in ${sdk.dir}/tools/proguard/proguard-android.txt
# You can edit the include path and order by changing the ProGuard
# include property in project.properties.
#
# For more details, see
#   http://developer.android.com/guide/developing/tools/proguard.html

# Add any project specific keep options here:

# Needed to keep the JNI functions around
-keepclassmembers class com.epicgames.ue4.GameActivity {
	public *;
}
-keep class * extends android.media.MediaPlayer {
	public *;
}
-keep class com.epicgames.ue4.MediaPlayer14 {
	public *;
}
-keep class com.epicgames.ue4.VideoDecoder {
	public *;
}
-keep class com.epicgames.ue4.AudioDecoder {
	public *;
}
-keep class com.epicgames.ue4.MessageBox01 {
	public *;
}
-keep class com.epicgames.ue4.WebViewControl {
	public *;
}
-keep class com.epicgames.ue4.BatteryReceiver {
	public *;
}
-keep class com.epicgames.ue4.HeadsetReceiver {
	public *;
}
-keep class com.epicgames.ue4.VolumeReceiver {
	public *;
}
-keep class com.epicgames.ue4.LocalNotificationReceiver {
	public *;
}
-keep class com.epicgames.ue4.MulticastBroadcastReceiver {
	public *;
}

# Needed...

-keep class com.epicgames.ue4.GameActivity$LaunchNotification {
	public *;
}

-keep class com.epicgames.ue4.GameActivity$InputDeviceInfo {
	public *;
}
-keep class com.epicgames.ue4.GameActivity$JavaAchievement {
	public *;
}
-keep class com.epicgames.ue4.MediaPlayer14$FrameUpdateInfo {
	public *;
}
-keep class com.epicgames.ue4.MediaPlayer14$AudioTrackInfo {
	public *;
}
-keep class com.epicgames.ue4.MediaPlayer14$CaptionTrackInfo {
	public *;
}
-keep class com.epicgames.ue4.MediaPlayer14$VideoTrackInfo {
	public *;
}

-keep class com.epicgames.ue4.WebViewControl {
	public *;
}
-keep class com.epicgames.ue4.WebViewControl$ViewClient {
	public *;
}
-keep class com.epicgames.ue4.WebViewControl$ChromeClient {
	public *;
}

-keep class com.epicgames.ue4.WebViewControl$ViewClient {
	public *;
}

-keep class com.epicgames.ue4.WebViewControl$ChromeClient {
	public *;
}

-keep class com.epicgames.ue4.WebViewControl$FrameUpdateInfo {
	public *;
}

-keep class com.epicgames.ue4.VideoDecoder$FrameUpdateInfo {
	public *;
}

# If your project uses WebView with JS, uncomment the following
# and specify the fully qualified class name to the JavaScript interface
# class:
#-keepclassmembers class fqcn.of.javascript.interface.for.webview {
#   public *;
#}

# Proguard flags for consumers of the Google Play services SDK
# https://developers.google.com/android/guides/setup#add_google_play_services_to_your_project

-keep class * extends java.util.ListResourceBundle {
	protected Object[][] getContents();
}

# Keep SafeParcelable value, needed for reflection. This is required to support backwards
# compatibility of some classes.
-keep public class com.google.android.gms.common.internal.safeparcel.SafeParcelable {
	public static final *** NULL;
}

# Needed for Parcelable/SafeParcelable classes & their creators to not get renamed, as they are
# found via reflection.
-keepnames class * implements android.os.Parcelable
-keepclassmembers class * implements android.os.Parcelable {
	public static final *** CREATOR;
}

# Keep the classes/members we need for client functionality.
-keep @interface android.support.annotation.Keep
-keep @android.support.annotation.Keep class *
-keepclasseswithmembers class * {
	@android.support.annotation.Keep <fields>;
}
-keepclasseswithmembers class * {
	@android.support.annotation.Keep <methods>;
}

# Keep the names of classes/members we need for client functionality.
-keep @interface com.google.android.gms.common.annotation.KeepName
-keepnames @com.google.android.gms.common.annotation.KeepName class *
-keepclassmembernames class * {
	@com.google.android.gms.common.annotation.KeepName *;
}

# Keep Dynamite API entry points
-keep @interface com.google.android.gms.common.util.DynamiteApi
-keep public @com.google.android.gms.common.util.DynamiteApi class * {
	public <fields>;
	public <methods>;
}

# Keep @UsedByReflection and @UsedByNative
-keep class com.google.android.apps.common.proguard.UsedBy*
-keep @com.google.android.apps.common.proguard.UsedBy* class *
-keepclassmembers class * {
	@com.google.android.apps.common.proguard.UsedBy* *;
}

# Needed when building against pre-Marshmallow SDK.
-dontwarn android.security.NetworkSecurityPolicy

# Needed when building against Marshmallow SDK.
-dontwarn android.app.Notification

# End Google Play services requirements

# Additional Google Play Services that seems to be needed
-keep class com.google.android.gms.games.NativeSdkCallbacks {
	*;
}
-keep public class com.google.android.gms.**
{
	public *;
}
-dontwarn com.google.android.gms.**

# Google Play Admob
-keep public class com.google.android.gms.ads.** {
	public *;
}

-keep public class com.google.ads.** {
	public *;
}

# Google Play Billing Services for In-App Purchases
-keep class com.android.vending.billing.** {
	*;
}

-keep class com.android.vending.licensing.** {
	*;
}

-keep class com.google.vending.licensing.** {
	*;
}

-keep class epicgames.ue4.StoreHelper.** {
	public *;
}

-keep class epicgames.ue4.GooglePlayStoreHelper.** {
	public *;
}

-dontwarn com.google.vr.cardboard.AndroidNCompat
-dontwarn com.google.vr.cardboard.StoragePermissionUtils
-dontwarn sun.misc.Unsafe
      # Keep filenames and line numbers for stack traces
      -keepattributes SourceFile,LineNumberTable

      # Keep JavascriptInterface for WebView bridge
      -keepattributes JavascriptInterface

      # Sometimes keepattributes is not enough to keep annotations
      -keep class android.webkit.JavascriptInterface {
      *;
      }

      # Keep all classes in Unity Ads package
      -keep class com.unity3d.ads.** {
      *;
      }
      -dontwarn com.unity3d.ads.**
      -dontwarn java.lang.invoke.**

      #vungle
      -keep class com.vungle.warren.** { *; }
      -keep class com.vungle.warren.downloader.DownloadRequest
      -dontwarn com.vungle.warren.error.VungleError$ErrorCode
      -dontwarn com.vungle.warren.downloader.DownloadRequest$Status
      -keepclassmembers enum com.vungle.warren.** { *; }

      # Moat SDK
      -keep class com.moat.** { *; }
      -dontwarn com.moat.**
      -dontwarn org.codehaus.mojo.animal_sniffer.IgnoreJRERequirement
      -keepattributes *Annotation*

      # Retrofit
      -keepattributes Signature, InnerClasses
      -dontwarn org.codehaus.mojo.animal_sniffer.IgnoreJRERequirement
      -dontwarn javax.annotation.**
      -dontwarn kotlin.Unit
      -dontwarn retrofit2.-KotlinExtensions
      -keepclassmembers,allowshrinking,allowobfuscation interface * {
      @retrofit2.http.* <methods>
        ;
        }

        # Okio+OkHttp
        -dontwarn okhttp3.**
        -dontwarn okio.**
        -dontwarn javax.annotation.**
        -dontwarn org.conscrypt.**
        -keepnames class okhttp3.internal.publicsuffix.PublicSuffixDatabase
        -keepclassmembers class * extends com.vungle.warren.persistence.Memorable {
        public <init>(byte[]);
      }


      -keep class com.chartboost.** { *; }

      -dontwarn org.apache.http.**
      -dontwarn android.net.http.**
      -dontwarn com.android.volley.**
      -dontwarn android.app.Activity

    			-keep class com.google.vr.sdk.samples.permission.** {
				*;
			}
