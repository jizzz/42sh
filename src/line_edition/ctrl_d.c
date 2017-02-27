/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctrl_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 16:55:26 by malaine           #+#    #+#             */
/*   Updated: 2017/02/27 16:56:48 by malaine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "edit_line.h"

void		ft_ctrl_d(t_line *l)
{
	if (l->str.size > 0)
		ft_backspace(l);
	else
		exit(0);
}
