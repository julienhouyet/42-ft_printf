# 42-ft_printf

![42-ft_printf](https://socialify.git.ci/julienhouyet/42-ft_printf/image?logo=https%3A%2F%2Fgithub.com%2Fayogun%2F42-project-badges%2Fraw%2Fmain%2Fbadges%2Fft_printfm.png&name=1&owner=1&pattern=Circuit%20Board&theme=Auto)

# Introduction

ft_printf was one of the first projects to be carried out at 42. The aim is to re-code the printf function in order to understand how it works. In future projects, the use of printf is forbidden, but we can use our own ft_printf function.

At [42 School](https://github.com/42School), almost every project must be written in accordance to the [Norm](https://github.com/42School/norminette/blob/master/pdf/en.norm.pdf), the school's coding standard. As a result, the implementation of certain parts may appear strange and for sure had room for improvement.

## :zap: Usage

To use this library, import the "include/ft_printf.h" header into your files after compiling the library.

```c
#include "include/ft_printf.h"
```

###  :electric_plug: Installation

To install the project, clone this repository :

```shell
$ git@github.com:julienhouyet/42-ft_printf.git
```

###  :package: Commands

To compile the library, run :

```shell
$ make
```

To re-compile the library  :

```shell
$ make re
```

To wipes all object files :

```shell
$ make clean
```

To delete the library and all object files

```shell
$ make fclean
```

##  :page_facing_up: Function in the library
 
✅ ft_printf
```c
int ft_printf( const char *str, ... );
```
> This ft_printf function supports several format specifiers, described below:
- [x] `%c` - Print a single character;
- [x] `%s` - Print a string;
- [x] `%p` - Print void * pointer argument in hexadecimal format;
- [x] `%d` - Print a decimal (base 10) number;
- [x] `%i` - Print an integer in base 10;
- [x] `%u` - Prints an unsigned decimal (base 10) number;
- [x] `%x` - Print a number in hexadecimal (base 16) lowercase format;
- [x] `%X` - Print a number in hexadecimal (base 16) uppercase format;
- [x] `%%` - Print a percentage sign;

##  :lock: License

GNU GENERAL PUBLIC LICENSE
Version 3