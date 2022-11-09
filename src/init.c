/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 08:26:45 by vivan-de          #+#    #+#             */
/*   Updated: 2022/11/09 01:00:26 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	init_ctx(t_ctx *ctx, char **args)
{
	int	i;

	ctx->args = get_args(args);
	i = 0;
	while (ctx->args[i])
		i++;
	ctx->argc = i;
	ctx->a = generate_stack(ctx->args);
	ctx->b = NULL;
	ctx->sorted_a = generate_stack(ctx->args);
	ctx->instructions = NULL;
	ctx->index_stack = NULL;
	merge_sort(&ctx->sorted_a);
}
