#!/bin/bash

# Compile all .c files into .o files
gcc -c *.c

# Create the static library liball.a
ar -rc liball.a *.o

# Index the library
ranlib liball.a

# Clean up the generated .o files
rm *.o

