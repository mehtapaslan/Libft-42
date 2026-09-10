*This project has been created as part of the 42 curriculum by mehaslan.*

# Libft

## Description
The `libft` project is the very first foundational milestone in the 42 curriculum. The goal of this project is to recreate a set of standard C library functions, alongside a few additional utility functions, from scratch. Because the use of most standard standard C library functions (like `<string.h>` or `<ctype.h>`) is strictly forbidden in 42 projects, this custom library will serve as a vital toolkit for all future assignments. It reinforces a deep understanding of memory management, pointers, and data structures in C.

## Library Details
The `libft` library (`libft.a`) includes several categories of essential functions:

*   **Character Classification & Conversion:** Functions like `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, and `ft_tolower`.
*   **String Manipulation:** Custom implementations of string operations including `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strlcpy`, and `ft_strlcat`. It also includes complex dynamic string functions that I carefully refined, such as `ft_split` (for string tokenization), `ft_substr` (for substring extraction), `ft_strjoin`, `ft_strtrim`, `ft_strmapi`, and `ft_striteri`.
*   **Memory Management:** Direct memory manipulation tools like `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, and `ft_calloc`.
*   **File Descriptor Output:** Functions to write basic data types to file descriptors: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, and `ft_putnbr_fd`.
*   **Number Conversion:** `ft_atoi` (string to integer) and `ft_itoa` (integer to string).

## Instructions

### Compilation
The library is compiled using a `Makefile`. It uses the `gcc` or `cc` compiler with the strict flags `-Wall -Wextra -Werror`.

To compile the library, simply run the following command in the root directory:
```bash
make
```
This will generate the compiled static library file named `libft.a`.

### Installation and Usage
To use `libft` in your own projects:
1. Include the header file in your C source files:
   ```c
   #include "libft.h"
   ```
2. Compile your source files along with the `libft.a` archive:
   ```bash
   cc -Wall -Wextra -Werror my_code.c -L. -lft -o my_program
   ```

### Makefile Rules
*   `make all` - Compiles the standard library.
*   `make clean` - Removes all the object (`.o`) files.
*   `make fclean` - Removes the object files and the `libft.a` file.
*   `make re` - Completely recompiles the library (`fclean` followed by `make`).
*   `make bonus` - Compiles the library with the additional linked list bonus functions.

## Resources
*   **Documentation:** 
    *   Linux Programmer's Manual (accessible via `man` command in terminal, e.g., `man 3 string`).
    *   GNU C Library Documentation.
*   **AI Usage:** AI was used to help write this README file. It was also used while coding, as a last resort for complex errors that could not be resolved through web searches or the official documentation.