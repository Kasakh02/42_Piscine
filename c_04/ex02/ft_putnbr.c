/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 07:28:21 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/08/16 17:32:54 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

/*int	main()
{
	write(1, "-1: ", 4);
	ft_putnbr(-1);
	write(1, "\n1: ", 4);
	ft_putnbr(1);
	write(1, "\n-10: ", 6);
	ft_putnbr(-10);
	write(1, "\n10: ", 5);
	ft_putnbr(10);
	write(1, "\nINT_MAX: ", 10);
	ft_putnbr(2147483647);
	write(1, "\nINT_MIN: ", 10);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	return (0);
}*/
