# fileDisc
study on file discriptors

<h1>Exploration Results</h1>

file discriptor example 

FILE *stdin;
FILE *stdout;
FILE *stderr;

File* high level high lvl input/output stream as shown above
fd is a low lvl integer as found in exploration: this can be extracted using the method fileno()

one mre thing

const char* means string just put double quotes instead of implecit type conversion

like:

      fopen("dummy.txt","r") is same as fopen("dummy.txt",(const char*) 'r')

ok

        also echo command -e accepts escape sequence


# how to compile in c:

 gcc -Wall -Wextra -g -pedantic fd.c -o fileDisc

gcc is GNU c compiler
-Wall  : Warnings all
-Wextra : means extra warnings
-g is debug


-fPIC : means Position Indipendent Code
-fopenmp : openMP parallelism
-O2 , O3 : vectorizaions in CPU we call them optimizations fast 
-funroll-loops : to unroll loops

                       
