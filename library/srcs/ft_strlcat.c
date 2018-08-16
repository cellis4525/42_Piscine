/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cellis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 21:35:23 by cellis            #+#    #+#             */
/*   Updated: 2018/07/30 23:02:50 by cellis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	j;
	unsigned int	res;

	d = 0;
	while (dest[d] != '\0')
		d++;
	s = 0;
	while (src[s] != '\0')
		s++;
	if (size <= d)
		res = s + size;
	else
		res = s + d;
	j = 0;
	while (src[j] != '\0' && d + 1 < size)
	{
		dest[d] = src[j];
		d++;
		j++;
	}
	dest[d] = '\0';
	return (res);
}
