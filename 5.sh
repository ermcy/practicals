#!/bin/bash

echo "Enter a string"
read input
reverse=""

len=${#input}

for ((i=$len-1; i>=0; i--))
do
  reverse="$reverse${input:$i:1}"
done

if [ $input == $reverse ]
then 
  echo "$input is a palindrom"
else 
  echo "$input is not a palindrom"
fi