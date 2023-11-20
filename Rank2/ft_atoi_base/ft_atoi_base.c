#include <stdio.h>

int	get_digit(char c)
{
	if(c >= 48 && c <=59)
		return (c - 48);
	else if (c >= 97 && c <= 102)
		return (c - 87);
	else if (c >= 65 && c <= 70)
		return (c - 55);
	else
		return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int res = 0;
	int neg = 1;
	int i = 0;
	
	while (str[i] && str[i] == '-')
	{
		neg *= -1;
		i++;
	}

	while (str[i] && get_digit(str[i]) != -1 && get_digit(str[i]) < str_base)
	{
		res = res * str_base + get_digit(str[i]);
		i++;
	}
	return (res * neg);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{	
		return (42);
	}
	printf("Res. en base %s : %d\n", argv[2], ft_atoi_base(argv[1], ft_atoi_base(argv[2], 10)));
	return (42);
}
