#!/bin/bash

c_files=$(ls *.c)
for source_file in $c_files;
do
object_file="${source_file%.c}.o"
gcc -c "$source_file" -o "$object_file"
done


ar rcs liball.a *.o

rm -f *.o
