/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 12:12:31 by mlu               #+#    #+#             */
/*   Updated: 2017/04/08 12:14:46 by mlu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_prime(int nb)
{
	int i;
	int prime;

	if (nb <= 1)
	{
		return (0);
	}
	else
	{
		i = 1;
		prime = 1;
		while (i <= nb / 2)
		{
			if (nb % i == 0 && !(i == 1))
			{
				prime = 0;
				break ;
			}
			i++;
		}
	}
	return (prime);
}