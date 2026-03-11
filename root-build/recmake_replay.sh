#!/bin/sh
rm -f CMakeCache.txt
/opt/homebrew/bin/cmake  -Dtmva-pymva="On" -Dtmva-sofie="On" /Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC 
/opt/homebrew/bin/cmake  -Dtmva-pymva="On" -Dtmva-sofie="On" /Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC
/opt/homebrew/bin/cmake  /Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC
/opt/homebrew/bin/cmake  -DPYTHON_EXECUTABLE="/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/.venv/bin/python" -Dbuiltin_protobuf="ON" /Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC
/opt/homebrew/bin/cmake  -DPYTHON_EXECUTABLE="/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/.venv/bin/python" -Dbuiltin_protobuf="ON" -Dvdt="OFF" /Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC
/opt/homebrew/bin/cmake  -DPYTHON_EXECUTABLE="/Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC/.venv/bin/python" -Dbuiltin_protobuf="ON" -Dtmva="ON" -Dtmva-sofie="ON" -Dvdt="OFF" /Users/sanilawijesekara/Documents/gsoc/Root/root-GSOC
