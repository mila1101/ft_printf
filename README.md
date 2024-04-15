# ft_printf
The "ft_printf" project in C involves creating a function that mimics the behavior of the standard printf() function. Here's a summary:

## Mandatory Part:
### Program Name: 
* libftprintf.a
### Makefile Rules: 
* NAME, all, clean, fclean, re
### External Functions: 
* malloc, free, write, va_start, va_arg, va_copy, va_end
### Description:
* Write a library containing ft_printf(), which imitates the original printf().
* The prototype of ft_printf() is: int ft_printf(const char *, ...).
* Handle conversions: c, s, p, d, i, u, x, X, %.

## Requirements:

Implement conversions for %c, %s, %p, %d, %i, %u, %x, %X, %%.

* %c: Prints a single character.
* %s: Prints a string.
* %p: Prints a pointer in hexadecimal format.
* %d: Prints a decimal number.
* %i: Prints an integer in base 10.
* %u: Prints an unsigned decimal number.
* %x: Prints a number in lowercase hexadecimal format.
* %X: Prints a number in uppercase hexadecimal format.
* %%: Prints a percent sign.
