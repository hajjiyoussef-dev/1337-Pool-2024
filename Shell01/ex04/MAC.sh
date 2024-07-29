#!/bin/bash 
ifconfig  -a | grep -E '([0-9A-Fa-f]{2}[:-]){5}([0-9A-Fa-f]{2})' | awk '{print $2}'
