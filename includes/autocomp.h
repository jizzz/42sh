/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   autocomp.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseinic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 17:40:54 by mseinic           #+#    #+#             */
/*   Updated: 2017/03/07 18:23:52 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AUTOCOMP_H
# define AUTOCOMP_H
# include <dirent.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
# include "shell.h"
# include "edit_line.h"

typedef struct		s_autocomp
{
	t_array			tab_a;
	int				first_time;
	size_t			index;
	t_string		path;
	t_string		str;
	int				nl;
}					t_autocomp;

typedef struct		s_aut_info
{
	DIR				*dirp;
	struct dirent	*dp;
}					t_aut_info;

void        print_auto(int largeur, t_autocomp *autocomp);
#endif
