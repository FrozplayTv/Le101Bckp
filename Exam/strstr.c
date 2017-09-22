/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limangin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 19:51:43 by limangin          #+#    #+#             */
/*   Updated: 2017/09/22 21:49:15 by limangin         ###   ########.fr       */
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
	char *a;
	char *b;

	if (ft_strlen(to_find) == 0)
		return (str);
	while (*str != '\0')
	{
		a = str;
		b = to_find;
		while (*str != '\0' && *to_find != '\0' && *str == *to_find)
		{
			str++;
			to_find++;
		}
		if (*to_find = '\0')
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
