/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cellis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 22:55:59 by cellis            #+#    #+#             */
/*   Updated: 2018/07/26 23:20:37 by cellis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	*ptr;

	ptr = "00 01, ";
	ft_putchar(ptr);
}

int		main(void)
{
	ft_print_comb2();
	ft_putchar('\n');
	return (0);
}
