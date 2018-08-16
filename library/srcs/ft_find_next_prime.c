/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cellis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 16:41:01 by cellis            #+#    #+#             */
/*   Updated: 2018/07/28 16:57:58 by cellis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_find_next_prime(int nb)
{
	int	d;
	int test;

	test = 0;
	if (nb < 2)
	{
		return (2);
	}
	while (test != 1)
	{
		d = 2;
		while (d <= nb / 2)
		{
			while (nb % d == 0)
			{
				nb++;
			}
			d++;
		}
		test = 1;
	}
	return (nb);
}
