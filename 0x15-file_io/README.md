# File Handling in C

File handling in C is an essential aspect of programming that allows you to work with files on your computer. This repository provides examples and explanations of various file handling operations in the C programming language.

## Table of Contents

1. [Introduction](#introduction)
2. [File Operations](#file-operations)
   - [Opening a File](#opening-a-file)
   - [Reading from a File](#reading-from-a-file)
   - [Writing to a File](#writing-to-a-file)
   - [Closing a File](#closing-a-file)
3. [File Pointers](#file-pointers)
4. [Error Handling](#error-handling)
5. [Examples](#examples)
6. [Contributing](#contributing)
7. [License](#license)

## Introduction

File handling is the process of working with files, which are a collection of data stored on a computer. In C programming, the `<stdio.h>` library provides functions for file handling.

## File Operations

### Opening a File

To perform any file operation, the first step is to open a file. The `fopen()` function is used for this purpose.

```c
FILE *fptr;
fptr = fopen("example.txt", "r");
if (fptr == NULL) {
    // Handle error
    printf("Error opening file!");
    return 1;
}

O_RONLY : Open for read only
O_WRONLY: Open for write only
O_RDWR: Open for Read and write
O_CREAT: Create a file if its does'nt exit
O_APPEND: Appends data to the end of a file
O_EXCL: Used with o_creat, returns an error if the file already exist
