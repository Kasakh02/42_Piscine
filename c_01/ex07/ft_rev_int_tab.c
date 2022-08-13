/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:46:28 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/08/08 08:28:44 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;
	int	j;

	j = size - 1;
	i = 0;
	while (i < size / 2)
	{
		aux = tab[j];
		tab[j] = tab[i];
		tab[i] = aux;
		i++;
		j--;
	}
}
