/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:20:30 by vivan-de          #+#    #+#             */
/*   Updated: 2022/11/08 22:44:27 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sb(t_ctx *ctx)
{
	if (!ctx->b)
		return ;
	if (!ctx->b->next)
		return ;
	swap_top(&ctx->b);
	if (ctx->instructions)
		ft_lstadd_back(&ctx->instructions, ft_lstnew(ft_strdup("sb")));
	else
		ctx->instructions = ft_lstnew(ft_strdup("sb"));
}
