/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cellis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 14:52:06 by cellis            #+#    #+#             */
/*   Updated: 2018/08/01 15:23:38 by cellis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char *argv[])
{
	char	*array;
	int		i;
	int		k;
	int		j;

	i = 0;
	array = (char*)malloc(sizeof(**argv) * argc);
	j = 1;
	k = 0;
	while (j != argc && argc)
	{
		i = 0;
		while (argv[j][i] != '\0' && argc)
		{
			array[k] = argv[j][i];
			i++;
			k++;
		}
		array[k] = ('\n');
		k++;
		j++;
	}
	k--;
	array[k] = '\0';
	return (array);
}
