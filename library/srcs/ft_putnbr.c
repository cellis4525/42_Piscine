/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cellis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 11:10:44 by cellis            #+#    #+#             */
/*   Updated: 2018/07/30 12:07:21 by cellis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned int	temp;

	if (nb < 0)
	{
		ft_putchar('-');
		temp = nb * -1;
	}
	else
	{
		temp = nb;
	}
	if (temp >= 10)
	{
		ft_putnbr(temp / 10);
	}
	ft_putchar((temp % 10) + '0');
}
