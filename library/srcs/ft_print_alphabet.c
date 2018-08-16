/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cellis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 16:30:11 by cellis            #+#    #+#             */
/*   Updated: 2018/07/27 14:03:07 by cellis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_alphabet(void)
{
	char	stop;
	char	start;

	stop = 'z';
	start = 'a';
	while (start <= stop)
	{
		ft_putchar(start);
		start++;
	}
}

int		main(void)
{
	ft_print_alphabet();
	ft_putchar('\n');
	return (0);
}
