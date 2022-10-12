/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:27:28 by vivan-de          #+#    #+#             */
/*   Updated: 2022/10/12 11:35:29 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack;

	if (argc < 2)
		error("Invalid number of arguments\n", 127);
	stack = generate_stack(argv);
	if (has_duplicates(stack))
	{
		clear_stack(stack);
		error("Stack cannot have duplicated values\n", 127);
	}
	print_stack(stack);
	ft_printf("\n");
	clear_stack(stack);
	return (0);
}
