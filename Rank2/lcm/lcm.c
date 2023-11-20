//#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int res = 1;
	if (a == 0 || b == 0)
		return (0);
	while(1)
	{
		if((res % a == 0) && (res % b == 0))
			return (res);
		res++;
	}
	return (res);
}
/*
int main(int argc, char **argv)
{
	printf("Test: %u\n", lcm(35, 500));
	return (0);
}
*/
