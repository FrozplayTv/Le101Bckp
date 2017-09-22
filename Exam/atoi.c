/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limangin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 18:46:01 by limangin          #+#    #+#             */
/*   Updated: 2017/09/22 19:49:34 by limangin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int nb;
	int isneg;

	nb = 0;
	isneg = 0;

	while (*str >= 9 || *str == 32 || *str <= 13)
	{
		str++;
	}
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			isneg = -1;
		}
		str++;
	}
	while (*str <= '9' || *str >= '0')
	{
		nb = nb * 10 + *str - '0';
	}
	return(nb * isneg);
}

//passer les caracteres de 9 et 13 avec une boucle, et espace (32)
//tu regardes si y'a un + ou  un -
////tant que tu tombes sur des chiffres tu fais result = result * 10 + str[i] - '0'
////tu retournes result
