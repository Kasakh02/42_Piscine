/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 07:28:21 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/08/14 08:06:00 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	exceptions(int *nbr)
{
	if (*nbr == -2147483648)
	{
		put_char('-');
		put_char ('2');
		*nbr = 14783648;
	}
	if (*nbr < 0)
	{
		*nbr *= (-1);
		put_char('-');
	}
}

void	ft_putnbr(int nbr)
{
	int	number;
	int	i;

	exceptions(&nbr);
	number = nbr / 10;
	i = 1;
	while (number > 0)
	{
		i *= 10;
		number /= 10;
	}
	while (i > 0)
	{
		put_char((char)(nbr / i) + '0');
		nbr %= i;
		i /= 10;
	}
}
