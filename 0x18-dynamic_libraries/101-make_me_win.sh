#!/bin/bash
wget -O /tmp/will.so https://github.com/schatz03/alx-low_level_programming/raw/master/0x18-dynamic_libraries/iwin.so
export LD_PRELOAD=/tmp/iwin.so
