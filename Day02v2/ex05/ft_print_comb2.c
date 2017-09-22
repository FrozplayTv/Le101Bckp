/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limangin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 11:27:02 by limangin          #+#    #+#             */
/*   Updated: 2017/09/15 13:30:40 by limangin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_thisissparta(char n1, char n2, char n3, char n4)
{
	if (n1 == '9' && n2 == '8' && n3 == '9' && n4 == '9')
	{
		ft_putchar(n1);
		ft_putchar(n2);
		ft_putchar(' ');
		ft_putchar(n3);
		ft_putchar(n4);
	}
	else
	{
		ft_putchar(n1);
		ft_putchar(n2);
		ft_putchar(' ');
		ft_putchar(n3);
		ft_putchar(n4);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_incr(char n1, char n2, char n3, char n4)
{
	while (n1 <= '9')
	{
		while (n2 <= '9')
		{
			while (n3 <= '9')
			{
				while (n4 <= '9')
				{
					if (n1 < n3 || (n1 == n3 && n2 < n4))
					{
						ft_thisissparta(n1, n2, n3, n4);
					}
					n4++;
				}
				n4 = '0';
				n3++;
			}
			n3 = '0';
			n2++;
		}
		n2 = '0';
		n1++;
	}
}

void	ft_print_comb2(void)
{
	char n1;
	char n2;
	char n3;
	char n4;

	n1 = '0';
	n2 = '0';
	n3 = '0';
	n4 = '0';
	ft_incr(n1, n2, n3, n4);
}
