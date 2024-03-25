#!/bin/bash

echo "Enter a date in dd-mm-yyyy format:"
read date

if [[ "$date" =~ ^[0-9]{2}-[0-9]{2}-[0-9]{4}$ ]] ; then
  day=$(echo "$date" | cut -d- -f1)
  month=$(echo "$date" | cut -d- -f2)
  year=$(echo "$date" | cut -d- -f3)

  if [[ "$day" -ge 1 && "$day" -le 31 ]] &&
     [[ "$month" -ge 1 && "$month" -le 12 ]] &&
     [[ "$year" -ge 1900 && "$year" -le 2900 ]] ; then
        echo "Valid date format"
  else
        echo "Invalid date"
   fi
else 
  echo "Invalid date format"
fi