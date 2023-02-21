# C-exercises
My C programs, exercises, and projects from K.N. King's "C Programming: A Modern Approach 2nd Edition".

## Table of contents
* [Notice](#notice)
* [Chapters](#chapters)
* [Compile and run](#compile-and-run)
* [Makefile for more than one source file](#Makefile-for-more-than-one-source-file)
* [More solutions](#more-solutions)
* [Licence nad copyright](#licence-nad-copyright)

## Notice
Some programs are not written by me, and the authors are listed there.

To any other eager young minds: I strongly recommend that you do your own version of the same repository, it will help you in your understanding of the topics described in the book. You are welcome to use it for comparison with yours. I built the repository while learning how these things work. There are a few bugs in it, and it's not a highly efficient or clean piece of code, but its sole purpose is to help you learn by doing.

## Chapters
[02](/02) - C Fundamentals

[03](/03) - Formatted Input/Output

[04](/04) - Expressions

[05](/05) - Selection Statements

[06](/06) - Loops

[07](/07) - Basic Types

[08](/08) - Arrays

[09](/09) - Functions

[10](/10) - Program Organization

[11](/11) - Pointers

[12](/12) - Pointers and Arrays

[13](/13) - Strings

[14](/14) - The preprocessor

[15](/15) - Writing Large Programs

[16](/16) - Structures, Unions, and Enumerations

[17](/17) - Advanced Uses of Pointers

[18](/18) - Declarations

[19](/19) - Program Design

[20](/20) - Low-Level Programming

[21](/21) - The Standard Library

[22](/22) - Input/Output

[23](/23) - Library Support for Numbers and Character Data 

[24](/24) - Error Handling

[25](/25) - International Features

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

stack_project is an executable, calc.c and stack.c are dependend on stack.h.

```
stack_project: calc.o stack.o
    gcc calc.o stack.o -o stack_project

calc.o: calc.c stack.h
    gcc -c calc.c

stack.o: stack.c stack.h
    gcc -c stack.c
```

## More solutions

[Official 1/3 solutions provided by K.N. King](http://knking.com/books/c2/answers/index.html)

[Solutions by williamgherman](https://github.com/williamgherman/c-solutions)

[Solutions by Fahien](https://github.com/Fahien/exc)

[Solutions by twcamper](https://github.com/twcamper/c-programming)

[Solutions by fordea](https://github.com/fordea/c-programming-a-modern-approach)

[Solutions by auwsmit](https://github.com/auwsmit/cpama2)

[Solutions by ashksmith](https://github.com/ashksmith/c-programming-a-modern-approach-solutions)

[Solutions by cedarbird](https://github.com/cedarbird/C_Programming_A_Modern_Approach_Second_Edition)

## Licence and copyright
#### Programs made by Piotr Marendowski are free to use, but programs made by K.N. King are property of W. W. Norton & Company, Inc. see LICENCE file for more information about use, sharing or editing repository and code written here. Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. All rights reserved.
