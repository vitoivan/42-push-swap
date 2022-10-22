/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 08:26:45 by vivan-de          #+#    #+#             */
/*   Updated: 2022/10/22 11:15:05 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	init_ctx(t_ctx *ctx, char **args)
{
	char	**a;
	int		i;

	i = 0;
	a = ft_split("./push 2 1 3 6 5 8", ' ');
	(void)args;
	ctx->a = generate_stack(a);
	ctx->b = NULL;
	ctx->args = args;
}
