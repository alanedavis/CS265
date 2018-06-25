#!/bin/bash

# viewing environment variables
echo "The value of the home variable is: $HOME"

# That's boring, grab output and make it readable
echo "The value of the pwd command is: $(pwd)"

# assign command output to a variable
output=$(pwd) #DON'T PUT SPACES AROUND EQUALS SIGN
echo "The value of the output variable is ${output}"

# view data on the command line
# $1 would print the first grouping of text before any spaces
echo "I saw $@ on the command line" # prints text after the execution of the command
echo "I saw $1 on the command line" # prints first word only
echo "I saw $2 on the command line" # prints second word only
echo "I saw $3 on the command line" # prints third word only
echo "I saw $1 $3 on the command line" # prints first and third words only
# ^^All viewed as storage locations

# read data from the user
# echo "Enter a value: "
# read userInput
# echo "You just entered $userInput"

# concatenate userinput with command output
# echo "Enter a file extension: "
# read ext
# touch "yourfile.${ext}"

# check to see if a file exists
if [ -d /etc/sysconfig ]; then # If the value inside the brackets is true then do the first
    # ^^"-d" determines if a file exists, and if it is a directory
    echo "That file is there and a directory"
else # If false then do the second part
    echo "File not there or not a directory"
fi # if statements end with "fi"

# Alternative more effective method
if [ -d $1 ]; then
    echo "That file is there and a directory"
else
    echo "File not there or not a directory"
fi

# How to block comment
: << 'END' # Beginning
END # End