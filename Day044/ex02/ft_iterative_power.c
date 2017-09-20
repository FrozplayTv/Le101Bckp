/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limangin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 17:42:24 by limangin          #+#    #+#             */
/*   Updated: 2017/09/19 19:11:10 by limangin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int cnt;
	int i;

	i = 1;
	cnt = power;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power != 0)
	{
		i = i * nb;
		power--;
	}
	return (i);
}
