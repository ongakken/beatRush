#!/bin/sh
UE4_TRUE_SCRIPT_NAME=$(echo \"$0\" | xargs readlink -f)
UE4_PROJECT_ROOT=$(dirname "$UE4_TRUE_SCRIPT_NAME")
chmod +x "$UE4_PROJECT_ROOT/beatRush_WIN/Binaries/Linux/beatRush-Linux-Shipping"
"$UE4_PROJECT_ROOT/beatRush_WIN/Binaries/Linux/beatRush-Linux-Shipping" beatRush_WIN "$@" 
