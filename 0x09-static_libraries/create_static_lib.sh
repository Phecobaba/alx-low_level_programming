#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.a 
ar rc liball.a *.o
ranlib liball.a
