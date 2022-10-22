/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:27:28 by vivan-de          #+#    #+#             */
/*   Updated: 2022/10/22 11:53:20 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_swap(int argc, char **argv)
{
	t_ctx	ctx;

	if (argc < 2)
		return ;
	check_args(argv);
	init_ctx(&ctx, argv);
	{
		ft_printf("\n\nstack a old\n");
		print_stack(ctx.a);
		ft_printf("stack b old\n");
		print_stack(ctx.b);
	}
	sa(&ctx);
	pb(&ctx);
	pb(&ctx);
	pb(&ctx);
	rr(&ctx);
	rrr(&ctx);
	sa(&ctx);
	pa(&ctx);
	pa(&ctx);
	pa(&ctx);
	{
		ft_printf("\n\nstack a new\n");
		print_stack(ctx.a);
		ft_printf("stack b new\n");
		print_stack(ctx.b);
	}
	clear_stack(ctx.a);
	clear_stack(ctx.b);
}
