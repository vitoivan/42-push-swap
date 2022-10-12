/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:14:46 by vivan-de          #+#    #+#             */
/*   Updated: 2022/10/12 12:38:17 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	print_stack(t_list *stack)
{
	t_list	*tmp;

	tmp = stack;
	ft_printf("[ ");
	while (tmp)
	{
		ft_printf("%s", tmp->content);
		tmp = tmp->next;
		if (tmp)
			ft_printf(" ");
	}
	ft_printf(" ]");
}
