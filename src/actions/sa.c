/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:20:30 by vivan-de          #+#    #+#             */
/*   Updated: 2022/10/26 23:40:40 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sa(t_ctx *ctx)
{
	if (!ctx->a)
		return ;
	if (!ctx->a->next)
		return ;
	swap_top(&ctx->a);
	if (ctx->instructions)
		ft_lstadd_back(&ctx->instructions, ft_lstnew(ft_strdup("sa")));
	else
		ctx->instructions = ft_lstnew(ft_strdup("sa"));
}
