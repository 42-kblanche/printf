*This project has been created as part of the 42 curriculum by kblanche.*

# ft_printf

## Description

The goal of this project is to create a library (`libftprintf.a`) containing `ft_printf`, a recreation of the `printf` C function, using variadic parameters.

The flags taken into account are the following: **cspdiuxX%**

## Instructions

### Basic usage

- To create the library, use `make`
- To cleanup object files use `make clean`
- Use the resulting `libftprintf.a` library to access the `ft_prinft` function.
	- The function prototype is the following: `int ft_printf(const char *, ...);`

### Testing

If this project was downloaded from github, you should also be able to create a testing program.

- To run tests, use the `make test` command
	- the resulting a.out program should display a variety of tests and use cases.

## Ressources

[man 3 printf](https://man7.org/linux/man-pages/man3/printf.3.html)

[cppreference - variadic functions](https://en.cppreference.com/w/c/variadic.html)

*AI was not used in this project*

## Technical choices

To achieve the project goals, I created a basic buffer structure that allowed me to reallocate easily the memory necessary when appending or inserting in it.

Although this is a buffer, it is not used to implement the buffer management of the original printf.

I decided to go with this approach to avoid having a printf that prints half a string if an error occurs during parsing, instead writing only once the parsing is over.

I used a basic *if-else* parsing function to replace the different flags with their variadic equivalents - using various *type-to-ascii* functions I created.

## Exemple code

#### hello_world.c

	#include "printfft.h"

	int	main(void)
	{
		ft_printf("Hello world!\n");
		return (0);
	}

#### test.c

	#include "printfft.h"

	int	main(void)
	{
		ft_printf("%%%c%s%p%d%i%u%x%X%%\n", 'A', "fortytwo", 0, -42, -42, -42, -42, -42);
	}

