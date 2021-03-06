/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jguthert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 13:49:16 by jguthert          #+#    #+#             */
/*   Updated: 2017/03/06 19:44:17 by mseinic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "edit_line.h"
#include <stdio.h>

static t_actions const	g_actions[19] = {
	{ft_right, {27, 91, 67, 0, 0, 0}, "RIGHT"},
	{ft_left, {27, 91, 68, 0, 0, 0}, "LEFT"},
	{ft_home, {27, 91, 72, 0, 0, 0}, "HOME"},
	{ft_end, {27, 91, 70, 0, 0, 0}, "END"},
	{ft_ctrl_right, {27, 91, 49, 59, 53, 67}, "CTRL Right"},
	{ft_ctrl_left, {27, 91, 49, 59, 53, 68}, "CTRL Left"},
	{ft_cut, {11, 0, 0, 0, 0, 0}, "CUT"},
	{ft_paste, {16, 0, 0, 0, 0, 0}, "PASTE"},
	{ft_delete, {127, 0, 0, 0, 0, 0}, "DELETE"},
	{ft_backspace, {27, 91, 51, 126, 0, 0}, "BACKSPACE"},
	{ft_ctrl_up, {27, 91, 49, 59, 53, 65}, "CTRL UP"},
	{ft_ctrl_down, {27, 91, 49, 59, 53, 66}, "CTRL DOWN"},
	{ft_ctrl_l, {12, 0, 0, 0, 0, 0}, "CTRL L"},
	{ft_home, {1, 0, 0, 0, 0, 0}, "CTRL A"},
	{ft_end, {5, 0, 0, 0, 0, 0}, "CTRL E"},
	{ft_ctrl_d, {4, 0, 0, 0, 0, 0}, "CTRL D"},
	{ft_up, {27, 91, 65, 0, 0, 0}, "UP"},
	{ft_down, {27, 91, 66, 0, 0, 0}, "DOWN"},
	{ft_autocomp, {9, 0, 0, 0, 0, 0}, "TAB"},
};

static int		cmp_buf(int *value, char *buf)
{
	int	i;

	i = 0;
	while (i < 6)
	{
		if (buf[i] != value[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int				actions(t_line *l)
{
	int	i;

	i = 0;
	while (g_actions[i].action != NULL)
	{
		if (cmp_buf((int *)g_actions[i].value, l->buffer) == 0)
		{
			if (i != 16 && i != 17)
				g_history.first_time = 0;
			g_actions[i].action(l);
			return (0);
		}
		i++;
	}
	return (1);
}
