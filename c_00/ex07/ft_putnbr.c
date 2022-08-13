/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 10:01:50 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/08/07 21:23:58 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write (1, &c, 1);
}

void	exceptions(int *nb)
{
	if (*nb < 0)
	{
		put_char('-');
		*nb *= -1;
	}	
	if (*nb == -2147483648)
	{
		put_char('2');
		*nb = 147483648;
	}
}

void	ft_putnbr(int nb)
{
	int	size;
	int	test;

	size = 1;
	exceptions(&nb);
	test = nb / 10;
	while (test > 0)
	{
		test = test / 10;
		size *= 10;
	}
	test = nb;
	while (size)
	{
		put_char((char)((test / size)) + '0');
		test %= size;
		size /= 10;
	}
}
