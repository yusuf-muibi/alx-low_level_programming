#!/bin/bash

c_files=$(ls *.c 2>/dev/null)

# Check if there are any .c files
if [ -z "$c_files" ]; then
exit 1
fi

gcc -c -fPIC $c_files
gcc -shared -o liball.so *.o

rm -f *.o
