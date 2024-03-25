#!/bin/bash 

# Check if the correct number of arguments are supplied
if [ "$#" -ne 3 ]; then
    echo "Error: Please provide exactly 3 numbers as command line arguments."
    exit 1
fi

# Assign the command line arguments to variables n1, n2 and n3
n1=$1
n2=$2
n3=$3

# Compare the number to find the largest
if [ "$n1" -gt "$n2" ] && [ "$n1" -gt "$n3" ]; then 
    echo "Number 1 is the biggest: $n1"
elif [ "$n2" -gt "$n1" ] && [ "$n2" -gt "$n3" ]; then 
    echo "Number 2 is the biggest: $n2"
elif [ "$n3" -gt "$n1" ] && [ "$n3" -gt "$n2" ]; then 
    echo "Number 3 is the biggest: $n3"
else 
    # Check if all three numbers are equal
    if [ "$n1" -eq "$n2" ] && [ "$n1" -eq "$n3" ]; then
        echo "All three numbers are equal"
    else
        # If no largest number can be determined, print "unable to determine"
        echo "unable to determine"
    fi
fi