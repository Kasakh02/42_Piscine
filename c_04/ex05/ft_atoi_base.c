/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:07:27 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/08/20 17:34:56 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| base[i] == '\n' || base[i] == '\t' || base[i] == '\v'
			|| base[i] == '\f' || base[i] == '\r')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

int	valid_char(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	base_to_decimal(int num, char c, char *base)
{
	int	i;
	int	base_size;

	base_size = 0;
	while (base[base_size])
		base_size++;
	i = 0;
	while (base[i] != c)
		i++;
	return (num * base_size + i);
}

int	ft_atoi_base(char *str, char *base)
{
	int			i;
	int			signal;
	long int	result;

	i = 0;
	signal = 1;
	result = 0;
	if (!valid_base(base))
		return (0);
	while (str[i] <= 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	while (valid_char(str[i], base))
	{
		result = base_to_decimal(result, str[i], base);
		i++;
	}
	return ((int)(signal * result));
}
