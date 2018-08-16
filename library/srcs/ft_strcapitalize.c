/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cellis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 17:39:18 by cellis            #+#    #+#             */
/*   Updated: 2018/07/30 20:41:31 by cellis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] < '0' ||
				(str[i] > '9' && str[i] < 'A') ||
				(str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			i++;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
		while ((str[i] >= '0' && str[i] <= '9') ||
				(str[i] >= 'A' && str[i] <= 'Z') ||
				(str[i] >= 'a' && str[i] <= 'z'))
		{
			if (str[i] <= 'Z' && str[i] >= 'A')
				str[i] = str[i] + 32;
			i++;
		}
	}
	return (str);
}
