//#include <stdio.h>

int	ischar(char c, const char *charset)
{
	int i = 0;

	while(charset[i])
	{
		if(charset[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

unsigned int	ft_strcspn(const char *s, const char *reject)
{
	unsigned int i = 0;
	
	while(s[i])
	{
		if(ischar(s[i], reject) != 0)
		{
			break ;
		}
	i++;
	}
	return (i);
}
/*
int main(int argc, char **argv)
{
//	printf("Test: %u\n", ft_strcspn("Salut", "xyaz"));
	return ((int)(ft_strcspn(argv[1], argv[2])));
	//return (0);
}
*/
