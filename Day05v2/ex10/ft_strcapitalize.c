/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limangin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 16:47:32 by limangin          #+#    #+#             */
/*   Updated: 2017/09/21 14:15:03 by limangin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_num(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

int		is_up(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

int		is_low(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

int		is_alpha(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (is_low(str[i]) == 1)
		str[i] -= 32;
	i++;
	while (str[i])
	{
		if (is_alpha(str[i - 1]) == 1 || is_num(str[i - 1]) == 1)
		{
			if (is_up(str[i]))
				str[i] += 32;
		}
		if (is_alpha(str[i - 1]) == 0 && is_num(str[i - 1]) == 0)
		{
			if (is_low(str[i]))
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
