/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:27:28 by vivan-de          #+#    #+#             */
/*   Updated: 2022/11/12 09:02:53 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_swap(int argc, char **argv)
{
	t_ctx	ctx;
	t_list	*instructions_tmp;

	if (argc < 2)
		return ;
	if (check_args(argv, argc))
		return ;
	init_ctx(&ctx, argv);
	radix_sort(&ctx, ctx.argc);
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
	clear_ctx(&ctx);
}
