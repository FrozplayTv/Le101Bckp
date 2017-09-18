/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limangin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 10:20:59 by limangin          #+#    #+#             */
/*   Updated: 2017/09/18 11:43:06 by limangin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int nb;
	int isneg;

//passer les caracteres de 9 et 13 avec une boucle, et espace (32)
	nb = 0;
	isneg = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
	}
	if(*str == '+' || *str == '-')
	{
		if(*str == '-')
			isneg = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + *str++ - '0';
	}
	return(nb * isneg);
}

int	main()
{
	printf("%d\n", ft_atoi("-64365 354ewt"));
}

//tu regardes si y'a un + ou  un -
//tant que tu tombes sur des chiffres tu fais result = result * 10 + str[i] - '0'
//tu retournes result
