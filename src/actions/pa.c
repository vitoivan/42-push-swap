/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:20:30 by vivan-de          #+#    #+#             */
/*   Updated: 2022/11/06 12:11:10 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pa(t_ctx *ctx)
{
	int	el;

	if (!ctx->b)
		return ;
	el = pop_first(&ctx->b);
	if (!ctx->a)
		ctx->a = ft_stack_new(el);
	else
		ft_stack_add_front(&ctx->a, ft_stack_new(el));
	if (ctx->instructions)
		ft_lstadd_back(&ctx->instructions, ft_lstnew(ft_strdup("pa")));
	else
		ctx->instructions = ft_lstnew(ft_strdup("pa"));
}
