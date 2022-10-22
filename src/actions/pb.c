/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:20:30 by vivan-de          #+#    #+#             */
/*   Updated: 2022/10/22 11:30:03 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pb(t_ctx *ctx)
{
	int	el;

	if (!ctx->a)
		return ;
	el = pop_first(&ctx->a);
	if (!ctx->b)
		ctx->b = ft_stack_new(el);
	else
		ft_stack_add_front(&ctx->b, ft_stack_new(el));
}
