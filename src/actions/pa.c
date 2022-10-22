/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:20:30 by vivan-de          #+#    #+#             */
/*   Updated: 2022/10/22 11:30:11 by vivan-de         ###   ########.fr       */
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
}
