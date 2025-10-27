# ft_printf - Recreating printf() in C

## Summary  
The goal of this project is to reimplement the well-known `printf()` function from the C standard library.  
It will teach you how to handle **variadic functions** and structure flexible, extensible C code.

## Overview
The goal of this project is to create a custom library, `libftprintf.a`, that replicates the core behavior of `printf()` from the C standard library.  

## Objectives
. Recreate the functionality of the standard printf() function.
. Learn to handle a variable number of arguments.
. Strengthen understanding of data types, pointers, and memory management.
. Learn modular and maintainable C code design.

### Description  
Write a library containing a function `ft_printf()` that mimics the original `printf()` function from libc.  
Your function must handle the following conversions:

| Conversion | Description |
|-------------|-------------|
| `%c` | Print a single character |
| `%s` | Print a string |
| `%p` | Print a pointer address in hexadecimal |
| `%d` | Print a decimal (base 10) number |
| `%i` | Print an integer (base 10) |
| `%u` | Print an unsigned decimal number |
| `%x` | Print a number in lowercase hexadecimal |
| `%X` | Print a number in uppercase hexadecimal |
| `%%` | Print a percent sign |

## Learning Goals  
- Understand **variadic functions** (`<stdarg.h>`).  
- Strengthen modular C design.  
- Improve understanding of string formatting and memory handling.  


## Author
Rayan Khaled
[rayannkhaled@outlook.com] [rayan-khaled]
