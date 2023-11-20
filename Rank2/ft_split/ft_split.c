#include <stdlib.h>

int	ischarset(char c)
{
	if (c == 9 || c == 32 || c == 10)
			return (1);
	return (0);
}

int	count_words(char *str)
{
	int i = 0;
	int count = 0;
	
	if(ischarset(str[i]) == 0)
		count++;
	while(str[i])
	{	
		while(str[i] && ischarset(str[i]) == 0)
			i++;
		while(str[i] && ischarset(str[i]) == 1)
			i++;
		if(str[i] && ischarset(str[i]) == 0)
			count++;
	}
	return (count);
}

int	count_char(char *str, int i)
{
	int len = 0;

	while(str[i] && ischarset(str[i]) == 0)
	{
		i++;
		len++;
	}
	return (len);
}

char	*create_str(char *str, int i)
{
	char *new;
	int y = 0;

	new = malloc(sizeof(char) * count_char(str, i) + 1);
	while(str[i] && ischarset(str[i]) == 0)
		new[y++] = str[i++];
	new[y] = '\0';
	return (new);
}
char    **ft_split(char *str)
{
	int i = 0;
	int y = 0;
	char *new;
	char **tab;
	
	new = NULL;
	tab = malloc(sizeof(tab) * count_words(str) + 1);
	while(str[i])
	{
		while(str[i] && ischarset(str[i]) == 1)
			i++;
		if(str[i] && ischarset(str[i]) == 0)
		{
			new = create_str(str, i);
			tab[y++] = new;
		}
		while(str[i] && ischarset(str[i]) == 0)
			i++;
	}
	tab[y] = 0;
	return tab;
}
/*
int	main(int argc, char **argv)
{
	ft_split(argv[1]);
	return (42);
}
*/
