/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouchet <bsouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 22:28:08 by bsouchet          #+#    #+#             */
/*   Updated: 2017/05/06 01:14:08 by bsouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *s)
{
	long	r;
	short	sign;

	r = 0;
	sign = 1;
	if (*s == '-' || *s == '+')
		sign = 44 - *s++;
	while (*s >= '0' && *s <= '9')
		r = r * 10 + *s++ - '0';
	return (sign * (int)r);
}
