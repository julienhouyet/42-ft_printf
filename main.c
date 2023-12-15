#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	int written;

	written = 0;
	
	written = ft_printf("Hello %s, ton nom de famille est %s\n", "Julien", "Houyet");
	printf("%d\n\n", written);

	written = 0;
	
	written = printf("Hello %s, ton nom de famille est %s\n", "Julien", "Houyet");
	printf("%d", written);
	return (0);
}