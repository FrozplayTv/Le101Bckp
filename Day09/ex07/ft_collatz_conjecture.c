/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limangin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 14:21:43 by limangin          #+#    #+#             */
/*   Updated: 2017/09/16 16:29:26 by limangin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	else if (!(base % 2 == 0))
		base = base / 2;
	else
		base = base * 3 + 1;
	return (ft_collatz_conjecture(base) + 1);
}
