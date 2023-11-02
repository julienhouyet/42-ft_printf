#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	a;
	char	*b;
	char	c;

	a = 'A';
	b = "Hello World";
	c = 42;
    int written = ft_printf("Hello %%\nc1 : %c\nc2 : %s\nc3 : %d", a, b, c);
    printf("\nCharacters written: %d\n\n", written);

    int writtenr = printf("Hello %%\nc1 : %c\nc2 : %s\nc3 : %d", a, b, c);
    printf("\nCharacters written: %d\n", writtenr);
	return (0);
}