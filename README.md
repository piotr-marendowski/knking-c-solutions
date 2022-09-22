# C-exercises
My C programs, exercises and projects from K.N. King's "C Programming: A Modern Approach 2nd Edition".

## Table of contents
* [Notice](#notice)
* [Chapters](#chapters)
* [Compile and run](#compile-and-run)
* [Makefile for more than one source file](#Makefile-for-more-than-one-source-file)
* [More solutions](#more-solutions)
* [Licence nad copyright](#licence-nad-copyright)

## Notice
Projects mostly have comments describing what is every part of it doing. Some have also description at the bottom, where I put some information about parts worth describing or about some problems ocurred along the way.

I highly encourage you to making the same repository all by yourself, it will help you understand topics described in the book. Feel free to use them and compare to yours. This repository is made by me, while learning how these things work. There are some mistakes, and it's not highly efficient or beautiful written code, but its sole purpose is to learn by doing. Have fun!

## Chapters
02 - C Fundamentals

03 - Formatted Input/Output

04 - Expressions

05 - Selection Statements

06 - Loops

07 - Basic Types

08 - Arrays

09 - Functions

10 - Program Organization

11- Pointers

12 - Pointers and arrays

13 - Strings

14 - The preprocessor

15 - Writing large programs

16 - Structures, Unions, and Enumerations

## Compile and run

### Compile

C standards:
* -std=c89
* -std=c99

```
gcc filename.c -o filename -std=c89
```
### Run (Linux)
```
./filename
```
### Run (Windows)
```
.\filename.exe
```

## Makefile for more than one source file

p15-05 is an executable, calc.c and stack.c are dependend on stack.h.

```
p15-05: calc.o stack.o
	gcc calc.o stack.o -o p15-05

calc.o: calc.c stack.h
	gcc -c calc.c

stack.o: stack.c stack.h
	gcc -c stack.c
```

## More solutions

[Solutions by williamgherman](https://github.com/williamgherman/c-solutions)

[Solutions by Fahien](https://github.com/Fahien/exc)

[Official 1/3 solutions provided by K.N. King](http://knking.com/books/c2/answers/index.html)

## Licence and copyright
#### Programs made by NiceMan1337 are free to use, but programs made by K.N. King are property of W. W. Norton & Company, Inc. see LICENCE file for more information about use, sharing or editing repository and code written here. Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. All rights reserved.
