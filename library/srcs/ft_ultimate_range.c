/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cellis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 14:21:05 by cellis            #+#    #+#             */
/*   Updated: 2018/08/02 23:21:45 by cellis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int	*array;
	int	j;

	if (min >= max)
	{
		array = NULL;
		*range = array;
		return (0);
	}
	array = (int*)malloc(sizeof(int) * (max - min));
	if (array == NULL)
		return (0);
	j = 0;
	i = max - min;
	while (j < i)
	{
		array[j] = min;
		min++;
		j++;
	}
	array[j] = '\0';
	*range = array;
	return (j);
}
