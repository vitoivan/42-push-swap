/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:27:28 by vivan-de          #+#    #+#             */
/*   Updated: 2022/11/06 12:55:43 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_swap(int argc, char **argv)
{
	t_ctx	ctx;
	t_list	*instructions_tmp;
	int		args_len;

	if (argc < 2)
		return ;
	args_len = 0;
	check_args(argv, &args_len);
	init_ctx(&ctx, argv);
	radix_sort(&ctx, args_len); // args_len = 9
	if (ctx.instructions)
	{
		instructions_tmp = ctx.instructions;
		while (instructions_tmp)
		{
			ft_printf("%s\n", instructions_tmp->content);
			instructions_tmp = instructions_tmp->next;
		}
		ft_lstclear(&ctx.instructions, free);
	}
	clear_stack(ctx.a);
	clear_stack(ctx.b);
	clear_stack(ctx.index_stack);
	clear_stack(ctx.sorted_a);
	while (args_len > 0)
	{
		if (ctx.args[args_len])
			free(ctx.args[args_len]);
		args_len--;
	}
	if (ctx.args[args_len])
		free(ctx.args[args_len]);
}
