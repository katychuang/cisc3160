#!/bin/bash


my_list=(1 2 32 8 17 19 42 13 0)
my_key=3

function linear_search() {
size=${#my_list[@]}
found=false

for ((i=0; i<$size; i++));
do
    if [[ my_list[$i] == "$my_key" ]];
    then
        found=true
    fi
done

echo "$found"
}

# print out to screen
echo "looking for ${my_key} from ${my_list[*]}"

linear_search
