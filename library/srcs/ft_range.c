/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cellis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 14:07:28 by cellis            #+#    #+#             */
/*   Updated: 2018/08/01 14:18:42 by cellis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int	*array;
	int	j;

	if (min >= max)
	{
		return (NULL);
	}
	i = max - min;
	j = 0;
	array = (int*)malloc(sizeof(int) * (max - min));
	while (j < i)
	{
		array[j] = min;
		min++;
		j++;
	}
	return (array);
}
