#include <stdio.h>
#include <stdlib.h>

int	nblen(int nb)
{
	int count = 1;
	if (nb == -2147483648)
		return (11);
	if (nb < 0)
	{
		count++;
		nb *= -1;
	}
	while(nb > 9)
	{	
		nb = nb / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int nbr)
{
	char *str;
	int i;
	int len;

	len = nblen(nbr);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (str);
	i = 0;
	if (nbr == -2147483648)
	{
		str[i++] = '-';
		str[i++] = '2';
		nbr = 147483648;
	} 
	else if (nbr < 0)
	{
		str[i] = '-';
		nbr *= -1;
		i++;
	}
	str[len] = '\0';
	while(--len >= i)
	{
		str[len] = nbr % 10 + 48;
		nbr = nbr / 10;
	}
	return (str);
}

int	main(void)
{

	printf("Res : %s\n", ft_itoa(0));
	return (42);
}
