/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limangin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 20:50:08 by limangin          #+#    #+#             */
/*   Updated: 2017/09/18 19:47:14 by limangin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int cnt;
	int i;

	cnt = 1;
	i = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (cnt <= nb)
	{
		i *= cnt;
		cnt++;
	}
	return (i);
}
