@echo off
IF %1.==. GOTO NoArgs
setlocal
set NDK_ROOT=%ANDROID_NDK_ROOT%
if "%ANDROID_NDK_ROOT%"=="" set NDK_ROOT="C:\NVPACK\android-ndk-r14b"
set NDKSTACK=%NDK_ROOT%
dk-stack.cmd

<<<<<<< HEAD
<<<<<<< HEAD
%NDKSTACK% -sym beatRush_Symbols_v25/beatRush-arm64-es2 -dump "%1" > beatRush_SymbolizedCallStackOutput.txt
=======
%NDKSTACK% -sym beatRush_Symbols_v22/beatRush-arm64-es2 -dump "%1" > beatRush_SymbolizedCallStackOutput.txt
>>>>>>> parent of 7c0873e... fixed that bug with the menu xD;
=======
%NDKSTACK% -sym beatRush_Symbols_v22/beatRush-arm64-es2 -dump "%1" > beatRush_SymbolizedCallStackOutput.txt
>>>>>>> parent of 7c0873e... fixed that bug with the menu xD;

goto:eof


:NoArgs
echo.
echo Required argument missing, pass a dump of adb crash log. (SymboliseCallStackDump C:\adbcrashlog.txt)
pause
