/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cellis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 21:43:17 by cellis            #+#    #+#             */
/*   Updated: 2018/08/06 21:53:09 by cellis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*tmp;

	i = 0;
	tmp = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		tmp[i] = f(tab[i]);
		i++;
	}
	return (tmp);
}
