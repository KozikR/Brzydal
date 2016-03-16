#!/bin/bash
export DISPLAY=:0.0

# turn off screenserver
xset s off
xset s noblank
xset -dpms

# hide cursor
xsetroot -cursor emptycursor emptycursor

