#!/bin/bash
echo "enter num 1  "
read a
echo "enter num 1 "
read b
echo "enter num 1 "
read c
if [ $a -gt $b ] && [ $a -gt $c ]
then
    echo $a is greater
elif [ $b -gt $a ] && [ $b -gt $c ]
then
    echo $b is greater
else
    echo $c is greater
fi