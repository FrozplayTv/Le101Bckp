/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limangin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 16:40:44 by limangin          #+#    #+#             */
/*   Updated: 2017/09/16 16:47:40 by limangin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#define SAVE_THE_WORLD "warrior"

typedef struct	s_perso
{
	char	*name;
	double	life;
	int		age;
	char	*profession;
}				t_perso;
