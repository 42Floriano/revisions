#include <stdlib.h>
//#include <stdio.h>

int checklen(int small, int big)
{
	int count = 0;
	while(small <= big)
	{
		small++;
		count++;
	}
	return (count);
}

int     *ft_rrange(int start, int end)
{
	int i = 0;
	int *liste;
	
	if(start == end)
	{
		liste = malloc(sizeof(int) * (1));
		liste[0] = start;
	}
	else if (end < start)
	{
		liste = malloc(sizeof(int) * checklen(end, start));
		while (end <= start)
			liste[i++] = end++;
	}
	else if (start < end)
	{
		liste = malloc(sizeof(int) * checklen(start, end));
		while (end >= start)
			liste[i++] = end--;
	}
	return (liste);
}
/*
int	main(void)
{
	int *liste = ft_rrange(0, -3);
	int i = 0;
	while(liste[i] != 666)
		printf("Test: %d\n", liste[i++]);
	return (42);
}
*/
