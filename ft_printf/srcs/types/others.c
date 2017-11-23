/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   others.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtouffet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 13:14:28 by vtouffet          #+#    #+#             */
/*   Updated: 2017/11/23 19:41:35 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../../includes/core.h"

int	flag_percentage(va_list args, t_flags flags)
{
	int		width;

	(void)args;
	if (flags.width)
	{
		if (flags.minus)
			write(STDOUT, "%", 1);
		width = 0;
		while (width++ < flags.width - 1)
			write(STDOUT, (flags.zero) ? "0" : " ", 1);
	}
	if (!flags.width || !flags.minus)
		write(STDOUT, "%", 1);
	return ((flags.width) ? flags.width : 1);
}
