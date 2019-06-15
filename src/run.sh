#!/bin/sh

gcc -o hello -fopenmp hello.c

export OMP_NUM_THREADS=5

./hello
