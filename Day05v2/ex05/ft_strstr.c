/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limangin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 15:11:43 by limangin          #+#    #+#             */
/*   Updated: 2017/09/21 14:15:37 by limangin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*a;
	char	*b;

	if (ft_strlen(to_find) == 0)
		return (str);
	while (*str)
	{
		a = str;
		b = to_find;
		while (*str && *to_find && *str == *to_find)
		{
			str++;
			to_find++;
		}
		if (!(*to_find))
			return (a);
		else
		{
			str = a;
			to_find = b;
		}
		str++;
	}
	return (0);
}
