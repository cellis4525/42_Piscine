/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cellis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 13:07:39 by cellis            #+#    #+#             */
/*   Updated: 2018/08/03 14:00:30 by cellis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_antidote(int i, int j, int k)
{
	if (i >= j && i >= k)
		if (j >= k)
			return (j);
		else
			return (k);
	else if (j >= i && j >= k)
		if (i >= k)
			return (i);
		else
			return (k);
	else if (k >= i && k >= j)
		if (i >= j)
			return (i);
		else
			return (j);
	else
		return (0);
}
