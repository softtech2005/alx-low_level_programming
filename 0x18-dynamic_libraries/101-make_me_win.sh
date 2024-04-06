#!/bin/bash
cp /home/giga_millions/gm .
LD_PRELOAD=./liball.so ./gm 9 8 10 24 75 9
