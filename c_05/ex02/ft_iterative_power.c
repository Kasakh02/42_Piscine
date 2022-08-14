/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 08:51:46 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/08/14 08:57:09 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_itertive_power(int nb, int power)
{
	int	result;

	result = nb;
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}
