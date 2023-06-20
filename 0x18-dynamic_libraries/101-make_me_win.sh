#!/bin/bash
wget -O /tmp/will.so https://github.com/schatz03/alx-low_level_programming/tree/master/0x18-dynamic_libraries/will.so
export LD_PRELOAD=/tmp/will.so
