/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:27:45 by falberti          #+#    #+#             */
/*   Updated: 2023/11/17 14:59:04 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	print_bits(unsigned char octet)
{
	int div = 128;
	int oct = octet;

	while (div != 0)
	{
		if(oct >= div)
		{
			putchar(1 + 48);
			oct = oct - div;
		} 
		else
		{
			putchar(0 + 48);
		}
		div = div / 2;
	}
}
//int	main(void)
//{
//	printbits(127);
//	return (0);
//}
