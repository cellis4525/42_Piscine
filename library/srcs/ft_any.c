/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cellis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 21:54:48 by cellis            #+#    #+#             */
/*   Updated: 2018/08/06 22:01:32 by cellis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i] != 0)
	{
		if (1 == f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}
