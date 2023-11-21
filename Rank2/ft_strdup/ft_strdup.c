#include <stdlib.h>
//#include <stdio.h>

int	len(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

char    *ft_strdup(char *src)
{
	int i = 0;
	char *new;
	
	new = malloc(sizeof(char) * (len(src) + 1));
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
int	main(void)
{
	printf("Test: %s\n", ft_strdup("Salut"));
	return (42);
}
*/
