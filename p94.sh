#!/bin/bash

for r in {1..4}
do
  for i in $(seq 1 $r)
  do
    printf "$i"
  done
  printf "\n"
done