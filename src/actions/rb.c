/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:20:30 by vivan-de          #+#    #+#             */
/*   Updated: 2022/10/26 23:40:11 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rb(t_ctx *ctx)
{
	if (!ctx->b)
		return ;
	shift(&ctx->b);
	if (ctx->instructions)
		ft_lstadd_back(&ctx->instructions, ft_lstnew(ft_strdup("rb")));
	else
		ctx->instructions = ft_lstnew(ft_strdup("rb"));
}
