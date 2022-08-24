/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:46:29 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/08/21 16:51:55 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src, int size)
{
	int		i;
	char	*dup;

	dup = (char *)malloc(sizeof(char) * (size + 1));
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*st;

	i = 0;
	st = malloc(sizeof(t_stock_str) * (ac + 1));
	if (st == NULL)
		return (NULL);
	while (i < ac)
	{
		st[i].size = ft_strlen(av[i]);
		st[i].str = av[i];
		st[i].copy = ft_strdup(av[i], st[i].size);
		i++;
	}
	st[i].size = 0;
	st[i].str = 0;
	st[i].copy = 0;
	return (st);
}
