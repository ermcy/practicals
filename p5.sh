#!/bin/bash

function add() { 
    sum=$(($1 + $2))
    echo "sum = $sum"
}

a=10
b=20
add $a $b