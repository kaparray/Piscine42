/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpowlows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 02:40:46 by hpowlows          #+#    #+#             */
/*   Updated: 2018/09/28 05:09:41 by hpowlows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

# include <uistd.h>
# define TRUE 1
# define CLOSE 0
# define OPEN 1
# define EXIT_SUCCESS 0

typedef	int			t_ft_bool;
typedef	struct		s_door
{
	int				state;
}					t_door;

int					is_door_open(t_door *door);
int					is_door_close(t_door *door);
int					open_door(t_door *door);
int					close_door(t_door *door);
void				ft_putchar(char *str);
#endif
