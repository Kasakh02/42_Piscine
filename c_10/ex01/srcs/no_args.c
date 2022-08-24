/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_args.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 08:01:12 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/08/23 08:01:14 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/ft.h"

void	no_args(char **argv)
{
	char	buf;

	while (read(0, &buf, 1) != 0)
	{
		if (errno == 0)
			ft_putchar(buf, 1);
		else
		{
			ft_putstr(basename(argv[0]), 2);
			ft_putstr(": stdin: ", 2);
			ft_putstr(strerror(errno), 2);
			ft_putchar('\n', 2);
			return ;
		}
	}
}
