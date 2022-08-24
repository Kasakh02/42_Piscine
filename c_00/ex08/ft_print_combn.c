/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 11:21:29 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/08/21 17:25:38 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	escreve(char c)
{
	write(1, &c, 1);
}

void	print(int *range, int n)
{
	int	i;
	int	display;

	i = 0;
	display = 1;
	while (++i < n)
		if (range[i - 1] >= range[i])
			display = 0;
	if (!display)
		return ;
	i = -1;
	while (++i < n)
		escreve(range[i] + 48);
	if (range[0] < (10 - n))
	{
		escreve(',');
		escreve(' ');
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	range[10];

	if (n > 10 || n < 0)
		return ;
	i = -1;
	while (++i < n)
		range[i] = i;
	while (range[0] <= (10 - n) && n >= 1)
	{
		print(range, n);
		if (n == 10)
			break ;
		range[n - 1]++;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (range[i] > 9)
			{
				range[i - 1]++;
				range[i] = 0;
			}
		}
	}
}

/*int	main()
{
	ft_print_combn(5);
}*/
