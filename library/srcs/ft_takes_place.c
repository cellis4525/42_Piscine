/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cellis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 20:34:21 by cellis            #+#    #+#             */
/*   Updated: 2018/08/02 23:11:08 by cellis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr_12(int n)
{
	if (n > 12)
		n = n - 12;
	if (n < 10)
	{
		ft_putchar('0');
		ft_putchar(n + '0');
	}
	else if (n >= 10)
	{
		ft_putchar('1');
		if (n == 10)
			ft_putchar('0');
		if (n == 11)
			ft_putchar('1');
		if (n == 12)
			ft_putchar('2');
	}
}

void	ft_takes_place(int hour)
{
	int		end;
	char	*ssuffix;
	char	*esuffix;

	end = hour + 1;
	ssuffix = ".00 A.M.";
	esuffix = ".00 A.M.\n";
	if (hour >= 12 && hour <= 22)
	{
		ssuffix = ".00 P.M.";
		esuffix = ".00 P.M.\n";
	}
	else if (hour == 11)
		esuffix = ".00 P.M.\n";
	else if (hour == 23)
		ssuffix = ".00 P.M.";
	ft_putstr("THE FOLLOWING TAKES PLACE BETWEEN ");
	ft_putnbr_12(hour);
	ft_putstr(ssuffix);
	ft_putstr("AND ");
	ft_putnbr_12(end);
	ft_putstr(esuffix);
}

int		main(void)
{
	int		i;

	i = 1;
	while (i < 24)
	{
		ft_takes_place(i);
		i++;
	}
	return (0);
}
