#!/bin/bash
while getopts ":ab:" option;
do
	case $option in
		a)
			echo received -a
			#Looping 1 to 10 with gap of 2
			for varn in {1..10}
			do
				echo $varn
			done
			# C/C++ Syntax
			for ((i =10; i>=1;i--))
			do
				echo $i
			done
			;;
		b)
			#Calling prent file
			source parent.sh
			echo User $name runing $var1
			;;
		*)
			echo "Invalid"
			;;
	esac
done
