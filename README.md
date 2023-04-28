<h1 align="center">
    <p>
        📓 Ft_Printf
    </p>
</h1>

<p align="center">
    <b><i>My own version of printf</i></b>
</p>

<p align="center">
    This repository is coded in&nbsp&nbsp
    <a href="https://skillicons.dev">
        <img src="https://skillicons.dev/icons?i=c" />
    </a>
</p>


## Table of Contents
- [Features](#features)
- [Installation](#installation)
- [Examples](#examples)
- [License](#license)

## Features:
> NOTE: This is only a partial implementation of printf as it does accomdate all error handling and cases
- ft_printf is a flexible, easy-to-use C library for formatted output to various output streams. The library aims to provide an alternative and customizable implementation of the widely-used printf.
- ft_printf does not use a buffer like the original.
- It handles write() errors.
- All functions have doxygen comments.
### It handles the following cases:
1. **%s** - Prints a string: The corresponding argument should be a pointer to a null-terminated character array. \
Example: `ft_printf("Hello, %s!\n", "world");`

2. **%c** - Prints a char: The corresponding argument should be a character value. \
Example: `ft_printf("The letter is: %c\n", 'A');`

3. **%p** - The void * pointer argument is printed in hexadecimal: The corresponding argument should be a pointer value. \
Example: `ft_printf("Pointer address: %p\n", &variable);`

4. **%d** - Print a decimal (base 10) number: The corresponding argument should be an integer value. \
Example: `ft_printf("The number is: %d\n", 42);`

5. **%i** - Prints an int (base 10): The corresponding argument should be an integer value. \
Example: `ft_printf("The integer is: %i\n", 42);`

6. **%u** - Print an unsigned decimal (base 10) number: The corresponding argument should be an unsigned integer value. \
Example: `ft_printf("The unsigned number is: %u\n", 42);`

7. **%x** - Prints hexadecimal, base 16 (lowercase): The corresponding argument should be an integer value. \
Example: `ft_printf("The hexadecimal number (lowercase) is: %x\n", 42);`

8. **%X** - Prints hexadecimal, base 16 (uppercase): The corresponding argument should be an integer value. \
Example: `ft_printf("The hexadecimal number (uppercase) is: %X\n", 42);`

9. **%%** - Prints a %: To include a literal '%' character in your output, use the '%%' format specifier. \
Example: `ft_printf("Percentage: 50%%\n");`

## Installation and setup
1. Clone the repository.
```shell
% git clone https://github.com/RealConrad/42printf.git ft_printf
```
2. Enter the directory and build the library.
```shell
% cd ft_printf
% make all
```

## Examples
An example on how to use the library. Remember to include `#include "ft_printf.h"` in every file where you call `ft_printf();`
```c
#include "ft_printf.h"

int main(void) {
    int value = 42;
    char str[] = "Hello, World!";

    ft_printf("Integer value: %d\n", value);
    ft_printf("String value: %s\n", str);

    return (0);
}
```
Compiling:
```shell
% cc -Wall -Werror -Wextra main.c libftprintf.a
```
