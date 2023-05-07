#!/bin/bash

# Find all C files within subdirectories and compile with flags
find . -type f -name "*.c" -execdir cc -Wall -Wextra -Werror {} \;

# Find all executables and execute them, checking for errors
find . -type f -name "a.out" -execdir sh -c 'if ! ./a.out; then echo "Error in $0"; fi' {} \;
