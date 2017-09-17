/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limangin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 16:16:03 by limangin          #+#    #+#             */
/*   Updated: 2017/09/16 16:29:53 by limangin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int stock_a;
	int stock_b;
	int stock_c;
	int stock_d;

	stock_a = ***a;
	stock_b = *b;
	stock_c = *******c;
	stock_d = ****d;
	*******c = ***a;
	****d = *******c;
	*b = stock_d;
	***a = stock_b;
}
