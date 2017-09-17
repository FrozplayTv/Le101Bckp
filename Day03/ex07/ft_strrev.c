/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limangin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 19:08:15 by limangin          #+#    #+#             */
/*   Updated: 2017/09/17 19:24:56 by limangin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int cnt;

	cnt = 0;
	while (str[cnt])
		cnt++;
	return (cnt);
}

void	ft_putstr(char *str)
{
	int w;

	w = 0;
	while(str[w] != '\0')
	{
		ft_putchar(str[w]);
		str++;
	}
}

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	ft_putstr(str);
	return(str);
}

int	main(int argc, char **argv)
{
	int		i;
//	char	*a;
//	int		length;

	i = 1;
	if(argc > 1)
		while(i < argc)
		{
//			length = ft_strlen(argv[i]);
//			a = malloc(length * sizeof(char) + 1);
//			a = argv[i];
			ft_strrev(argv[i++]);
		}
}
