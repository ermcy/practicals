#!/bin/bash

read -p "Enter two strings: " str1 str2

if [ $str1 == $str2 ]
then 
  echo "equal strings"
else
  echo "unequal strings"
fi