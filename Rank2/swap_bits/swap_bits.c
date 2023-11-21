#include <unistd.h>
#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int	main(int ac, char **av)
{
	if (ac == 2 && av[1] != NULL)
		printf("%u\n", swap_bits(av[1][0]));
	write(1, "\n", 1);
	return (42);
}
