/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_last.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:20:30 by vivan-de          #+#    #+#             */
/*   Updated: 2022/10/22 11:07:19 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	pop_last(t_stack **stack)
{
	t_stack	*tmp;
	int		value;

	tmp = *stack;
	while (tmp->next->next)
		tmp = tmp->next;
	value = tmp->next->value;
	free(tmp->next);
	tmp->next = NULL;
	return (value);
}
