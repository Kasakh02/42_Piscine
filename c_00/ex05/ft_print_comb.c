/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 19:24:38 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/08/07 21:23:39 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	put_space(void)
{
	put_char(',');
	put_char(' ');
}

void	put_all_numbers(char i, char j, char k)
{
	put_char(i);
	put_char(j);
	put_char(k);
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '9')
	{	
		j = i + 1;
		while (j <= '9')
		{
			k = j + 1;
			while (k <= '9')
			{
				put_all_numbers (i, j, k);
				if (!(i == '7' && j == '8' && k == '9'))
				{
					put_space();
				}
				k++;
			}
			j++;
		}
	i++;
	}
}
