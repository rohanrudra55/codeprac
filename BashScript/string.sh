#!/bin/bash

result="My name"
result="${result} is Rohan"
result+=" Rudra"
echo ${result}

# Split string
input="one-two-three"
IFS='-' array=($input)
for element in "${array[@]}";
do
 echo $element;
 done
 msg="I AM ROHAN"
 echo "$msg" | perl -ne 'print lc'
