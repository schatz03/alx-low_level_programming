#!/bin/bash
wget -P /tmp https://github.com/schatz03/alx-low_level_programming/raw/main/0x18-dynamic_libraries/will.so
export LD_PRELOAD=/tmp/will.so
