/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:54:06 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/08/23 12:32:04 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*res;
	int	i;

	size = max - min;
	i = 0;
	*range = malloc(size * sizeof(int));
	res = *range;
	if (size == 0 || size < 0)
	{
		*range = 0;
		return (0);
	}
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		res[i] = min;
		i++;
		min++;
	}
	return (size);
}

int	main(void)
{
	int	*p;
	int	x;
	int	i;

	x = ft_ultimate_range(&p, -4, -1);
	i = 0;
	while (i < 3)
	{
		printf("%d\n", p[i]);
		i++;
	}
	printf("%i", x);
}
