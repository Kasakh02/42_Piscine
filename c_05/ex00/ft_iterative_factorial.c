/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 08:30:42 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/08/14 08:38:00 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	result;

	result = nb;
	if (nb < 0)
		return (0);
	nb--;
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
