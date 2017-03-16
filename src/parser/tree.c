/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angagnie <angagnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 22:58:37 by angagnie          #+#    #+#             */
/*   Updated: 2017/03/16 09:52:18 by angagnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

/*
** shellPush(N**, N*)
*/

t_tr		shell_push(t_tnode **a, t_tnode *b)
{
	const union u_sh_node *ac = (union u_sh_node *)*a;
	const union u_sh_node *bc = (union u_sh_node *)b;

	if (ac == NULL)
	{
		*a = b;
		return (TR_DONE);
	}
	return (TR_ERROR);
}
