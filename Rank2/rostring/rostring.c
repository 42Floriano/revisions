#include <stdlib.h>
#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

int	checklen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return(i);
}

int	ischarset(char c)
{
	if(c == 9 || c == 32)
		return (1);
	return (0);	
}

char *newword(char *str, int i)
{
	char *new;
	int count = 0;
	int ii = i;
	
	while (str[i] && ischarset(str[i]) == 0)
	{
		i++;
		count++;
	}
	new = malloc(sizeof(char) * (count + 2));
	if (new == NULL)
		return (new);
	count = 0;
	//new[count++] = 32;
	while(str[ii] && ischarset(str[ii]) == 0)
		new[count++] = str[ii++];
	new[count] = '\0';
	return (new);
}
char	*rostring(char *str)
{
	char *new;
	char *fword;
	int i;
	int y;
	int fw = 0;
	
	new = malloc(sizeof(char) * (checklen(str) + 1));
	if (new == NULL)
		return (new);
	i = 0;
	y = 0;
	while(str[i])
	{
		while(str[i] && ischarset(str[i]) == 1)
			i++;
		if(str[i] && ischarset(str[i]) == 0 && fw == 0)
		{ 
			fword = newword(str, i);
			fw = 1;
			while(str[i] && ischarset(str[i]) == 0)
				i++;
			while (str[i] && ischarset(str[i]) == 1)
				i++;
		}
		while (str[i] && ischarset(str[i]) == 0)
		{
			new[y++] = str[i++];
		}
		if (str[i] && ischarset(str[i]) == 1 && (str[i + 1] != '\0' || str[i + 2] != '\0'))
			new[y++] = 32;			
	}
	i = 0;
	if(new[0] != '\0' && ischarset(new[y - 1]) != 1)
		new[y++] = 32;
	while(fword[i])
		new[y++] = fword[i++];
	new[y] = '\0';
	return (new);
}

int	main(int ac, char **av)
{
	int i = 0;
	char *str;

	if(ac >= 2 && av[1] != NULL)
	{
		str = rostring(av[1]);
		while(str[i])
			ft_putchar(str[i++]);
	}
	ft_putchar('\n');
	return (42);
}
