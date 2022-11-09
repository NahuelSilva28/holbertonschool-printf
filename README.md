# C - printf 

- Writing our own `printf` function, this is a project done under [Low Level Programming holbertonschool-printf](https://github.com/NahuelSilva28/holbertonschool-printf).

## Resource

- [secrets of printf](https://www.cypress.com/file/54761/download)
- [Implementing printf and scanf in C](https://iq.opengenus.org/how-printf-and-scanf-function-works-in-c-internally/)
- [All About Printf](https://akshatshibu.wordpress.com/2015/07/22/all-about-printf/)

## General Requirements

- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line.
- No more than 5 functions per file.
- You are not allowed to use global variables.
- The prototypes of all your functions should be included in your header file called `holberton.h`
- All your header files should be include guarded.

### Authorized functions and macros

- `write` (`man 2 write`)
- `malloc` (`man 3 malloc`)
- `free` (`man 3 free`)
- `va_start` (`man 3 va_start`)
- `va_end` (`man 3 va_end`)
- `va_copy` (`man 3 va_copy`)
- `va_arg` (`man 3 va_arg`)

### Github

- There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.

### Compilation

- The code can be compiled like this:
	```sh
	gcc -Wall -Werror -Wextra -pedantic -std=gnu89 test/main.c *.c -o print
	```
- All test files will be in the [test](./test) directory.


### Authors

<<<<<<< HEAD
<<<<<<< HEAD
- [Franco-Olmos](https://github.com/Franco-Olmos).
- [NahuelSilva28](https://github.com/NahuelSilva28).
=======
- Franco Olmos C19- Github: Franco-Olmos
- Nahuel Silva C19- Github: NahuelSilva28
>>>>>>> 11e52748fbe9b280afd496fe4d2b0bcfe029e3f3
=======
- Franco Olmos C19- Github: [Franco-Olmos](https://github.com/Franco-Olmos)
- Nahuel Silva C19- Github: [NahuelSilva28](https://github.com/NahuelSilva28)
>>>>>>> a7bdc1d903628a6774be3c9e97270852dc926079


## Tasks

0. **I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life** : A function that produces output according to a format.
	- Prototype: int `_printf(const char *format, ...);`
	- Returns: the number of characters printed (excluding the null byte used to end output to strings)
	- write output to stdout, the standard output stream
	- `format` is a character string. The format string is composed of zero or more directives. See `man 3 printf` for more detail. You need to handle the following conversion specifiers:
		- `c`
		- `s`
		- `%`
	- You don’t have to reproduce the buffer handling of the C library `printf` function.
	- You don’t have to handle the flag characters.
	- You don’t have to handle field width.
	- You don’t have to handle precision.
	- You don’t have to handle the length modifiers.

1. **Education is when you read the fine print. Experience is what you get if you don't** : Handle the following conversion specifiers:
	- `d`
	- `i`
	- You don’t have to handle the flag characters.
	- You don’t have to handle field width.
	- You don’t have to handle precision.
	- You don’t have to handle the length modifiers.

2. **Just because it's in print doesn't mean it's the gospel** : Create a man page for your function.
	- How to read the man page: `man ./man_3_printf`
