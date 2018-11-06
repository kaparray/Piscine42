/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpowlows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 02:09:36 by hpowlows          #+#    #+#             */
/*   Updated: 2018/09/28 02:35:15 by hpowlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

# include <string.h>

# define SAVE_THE_WORLD "Agent"

typedef	struct		s_perso
{
	char		*name;
	double		life;
	int			age;
	char		*profession;
}					t_perso;

#endif
