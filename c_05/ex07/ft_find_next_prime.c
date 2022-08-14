/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 11:15:21 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/08/14 12:00:49 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	j;
	int	status;

	status = 0;
	if (nb == 0 || nb == 1)
		return (0);
	else
	{
		while (status != 2)
		{
			status = 0;
			j = nb;
			while (j > 0)
			{
				if (nb % j == 0)
					status++;
				j--;
			}
			if (status == 2)
				return (nb);
			nb++;
		}
	}
	return (0);
}
