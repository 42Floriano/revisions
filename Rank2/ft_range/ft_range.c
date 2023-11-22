#include <stdlib.h>
#include <stdio.h>

int	checklen(int s, int e)
{
	int count = 0;
	while (s <= e)
	{
		s++;
		count++;
	}
	return (count);
}
int     *ft_range(int start, int end)
{
	int *tab;
	int i = 0;

	if (start == end)
	{
	tab = malloc(sizeof(int) * 1);
	tab[i++] = start;
	}
	else if (start < end)
	{
	tab = malloc(sizeof(int) * checklen(start, end));
	while (start <= end)
		tab[i++] = start++; 
	}
	else if (start > end)
	{
	tab = malloc(sizeof(int) * checklen(end, start));
	while (start >= end)
		tab[i++] = start--;
	}
	return (tab);
}
/*
int	main(void)
{
	int i = 0;
	int *tab = ft_range(0, -3);
	
	while(tab[i] != 666)
		printf("%d\n", tab[i++]);
	return (42);
}
*/
