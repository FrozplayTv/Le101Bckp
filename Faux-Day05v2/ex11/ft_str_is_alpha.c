/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limangin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 16:57:24 by limangin          #+#    #+#             */
/*   Updated: 2017/09/20 17:25:23 by limangin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((!(str[i] >= 'a' && str[i] <= 'z')) ||
				(!(str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
