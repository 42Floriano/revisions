//#include <stdio.h>

int	ft_atoi(const char *str)
{
	int res;
	int i;
	int neg;
	
	res = 0;
	neg = 1;
	i = 0;
	

	while(str[i] && ( str[i] == 43 || str[i] == 45 || str[i] == 32))
	{
		if (str[i] == 45)
		{
			neg *= -1;
		}
		i++;
	}
	
	while(str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}

	if(neg == -1)
		res *= -1;
	return res;
}

/*
int	main(int argc, char **argv)
{
	printf("Test: %d\n", ft_atoi(argv[1]));
	return (42);
}
*/
