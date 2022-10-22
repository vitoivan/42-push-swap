/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_top.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:20:30 by vivan-de          #+#    #+#             */
/*   Updated: 2022/10/22 10:53:57 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	swap_top(t_stack **stack)
{
	int		tmp;
	t_stack	*aux;

	aux = *stack;
	tmp = aux->value;
	if (aux->next != NULL)
	{
		aux->value = aux->next->value;
		aux->next->value = tmp;
	}
}
