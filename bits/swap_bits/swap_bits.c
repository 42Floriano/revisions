#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet << 4) | (octet >> 4));
}

int	main(void)
{
	printf("Res: %u\n", swap_bits('A'));
	return (42);
}
