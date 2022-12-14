/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:14:46 by vivan-de          #+#    #+#             */
/*   Updated: 2022/10/22 09:48:01 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	print_stack(t_stack *stack)
{
	t_stack	*tmp;

	if (!stack)
	{
		ft_printf("(null)\n");
		return ;
	}
	tmp = stack;
	ft_printf("[ ");
	while (tmp)
	{
		ft_printf("%d", tmp->value);
		tmp = tmp->next;
		if (tmp)
			ft_printf(", ");
	}
	ft_printf(" ]\n");
}
