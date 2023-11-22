#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int len = 8;
	unsigned char byte = 0;
	
	while(len--)
	{	
		byte = byte * 2 + (octet % 2);
		octet = octet / 2;
	}
	return (byte);
}

int	main(void)
{
	printf("Res: %u\n", reverse_bits('A'));
	return (42);
}
