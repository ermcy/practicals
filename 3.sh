#!/bin/bash

echo "Enter a number"
read num
g=$num

s=0

while [ $num -gt 0 ]
do
  k=$(( $num % 10 ))
  num=$(( $num / 10 ))
  s=$(( $s + $k ))
done

echo "Sum of the $g = $s"