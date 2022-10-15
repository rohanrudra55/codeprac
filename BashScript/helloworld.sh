#!/bin/zsh
echo Hello World !
var1=Rohan
echo $var
echo this script name $0
echo First arg is $1
echo Second arg $2
echo No of inputs $#

if [ "$#" == "0" ]
then 
	echo pass atleast one parm
	exit 1
fi
while (( $# ))
do 
	echo you gave me $1
	shift
done
echo Enter yout name :
read name
echo $name Sir
echo $#
