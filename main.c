#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{

	/*****************************/
	/************ CHAR *********/
	/*****************************/

	/*
	int written;

	written = ft_printf("%c", '0');
    printf("\nCharacters written: %d\n\n", written);
	written = printf("%c", '0');
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %c ", '0');
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %c ", '0');
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %c", '0' - 256);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %c", '0' - 256);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf("%c ", '0' + 256);
    printf("\nCharacters written: %d\n\n", written);
	written = printf("%c ", '0' + 256);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %c %c %c ", '0', 0, '1');
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %c %c %c ", '0', 0, '1');
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %c %c %c ", ' ', ' ', ' ');
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %c %c %c ", ' ', ' ', ' ');
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %c %c %c ", '1', '2', '3');
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %c %c %c ", '1', '2', '3');
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %c %c %c ", '2', '1', 0);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %c %c %c ", '2', '1', 0);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %c %c %c ", 0, '1', '2');
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %c %c %c ", 0, '1', '2');
    printf("\nCharacters written: %d\n\n", written);
	*/

	/*****************************/
	/************ STRING *********/
	/*****************************/

	int written;
	char *s2 = "Mussum Ipsum, cacilds vidis litro abertis. Posuere libero varius. Nullam a nisl ut ante blandit hendrerit. Aenean sit amet nisi. Atirei o pau no gatis, per gatis num morreus.";

	written = ft_printf("%s", "");
    printf("\nCharacters written: %d\n\n", written);
	written = printf("%s", "");
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %s", "");
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %s", "");
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf("%s ", "");
    printf("\nCharacters written: %d\n\n", written);
	written = printf("%s ", "");
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %s ", "");
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %s ", "");
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %s ", "-");
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %s ", "-");
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %s %s ", "", "-");
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %s %s ", "", "-");
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %s %s ", " - ", "");
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %s %s ", " - ", "");
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %s %s %s %s %s", " - ", "", "4", "", s2);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %s %s %s %s %s", " - ", "", "4", "", s2);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 ");
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 ");
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" NULL %s NULL ", NULL);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" NULL %s NULL ", NULL);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");
	return (0);
}