/*
* EasyAds - unreal engine 4 ads plugin
*
* Copyright (C) 2019 feixuwu <feixuwu@outlook.com> All Rights Reserved.
*/

package com.ads.util;

import org.json.JSONObject;

/**
 * Created by feixu on 2017/6/22.
 */

public interface IAdsListener {
    void OnResponse(boolean isOk, JSONObject resp);
}
