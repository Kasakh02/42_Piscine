/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcorrea- <hcorrea-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 08:00:07 by hcorrea-          #+#    #+#             */
/*   Updated: 2022/08/23 08:02:10 by hcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		ft_file_read(char *filepath)
{
	int			file;
	int			size;
	char		buf[__BUFF];

	file = open(filepath, O_RDWR);
	if (file != -1)
	{
		while ((size = read(file, buf, __BUFF)) != 0)
			ft_putstr_buf(buf, size);
		return (1);
	}
	else
		return (0);
}
