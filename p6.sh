#!/bin/bash

current_hour=$(date +%H)
echo $current_hour

if [ $current_hour -ge 6 ] && [ $current_hour -lt 12 ]; then
  echo "Good Morning!"
elif [ $current_hour -ge 12 ] && [ $current_hour -lt 18 ]; then
  echo "Good Afternoon!"
else
  echo "Good Evening!"
fi