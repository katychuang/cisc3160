#! /bin/bash
# Example Hello world from bash shell script using variables
# https://devdocs.io/bash/
# ---------------

# single line comment starts with # character

# define a bash shell variable called var
# void spaces around the = character
my_string="Hello world!"

echo "$my_string"

# you can also use
printf "\n%s\n\n" "$my_string"
