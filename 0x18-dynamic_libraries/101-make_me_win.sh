#!/bin/bash
wget -P /tmp/ https://github.com/schatz03/alx-low_level_programming/tree/master/0x18-dynamic_libraries/iwin.so
export LD_PRELOAD=/tmp/iwin.so
