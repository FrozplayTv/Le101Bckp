/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limangin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 18:52:39 by limangin          #+#    #+#             */
/*   Updated: 2017/09/15 18:19:58 by limangin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long b;
	b = nb;

	if (b < 0)
	{
		ft_putchar('-');
		b *= -1;
	}
	if (b >= 10)
	{
		ft_putnbr(b / 10);
	}
	ft_putchar((b % 10) + '0');
	nb = b;
}
