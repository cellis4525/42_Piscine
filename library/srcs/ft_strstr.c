/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cellis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 16:42:37 by cellis            #+#    #+#             */
/*   Updated: 2018/07/30 16:51:46 by cellis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int num;
	unsigned int i;

	if (to_find[0] == '\0')
		return (str);
	num = 0;
	while (str[num] != '\0')
	{
		if (str[num] == to_find[0])
		{
			i = 1;
			while (to_find[i] != '\0' && str[num + i] == to_find[i])
				i++;
			if (to_find[i] == '\0')
				return (&str[num]);
		}
		num++;
	}
	return (0);
}
