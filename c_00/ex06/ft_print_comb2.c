/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 20:35:57 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/08/09 14:37:04 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write (1, &c, 1);
}

void	print_numbers(int n1, int n2)
{
	put_char(n1 / 10 + '0');
	put_char(n1 % 10 + '0');
	put_char(' ');
	put_char(n2 / 10 + '0');
	put_char(n2 % 10 + '0');
	if (n1 != 98)
	{
		put_char(',');
		put_char(' ');
	}
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			print_numbers(n1, n2);
			n2++;
		}
		n1++;
	}
}
