/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:40:18 by vivan-de          #+#    #+#             */
/*   Updated: 2022/11/08 22:26:51 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	split_stack_in_two(t_stack *stack, t_stack **l, t_stack **r)
{
	t_stack	*slow;
	t_stack	*fast;

	slow = stack;
	fast = stack->next;
	while (fast != NULL)
	{
		fast = fast->next;
		if (fast != NULL)
		{
			slow = slow->next;
			fast = fast->next;
		}
	}
	*l = stack;
	*r = slow->next;
	slow->next = NULL;
}

static t_stack	*merge_two_parts(t_stack *l, t_stack *r)
{
	t_stack	*result;

	result = NULL;
	if (l == NULL)
		return (r);
	else if (r == NULL)
		return (l);
	if (l->value <= r->value)
	{
		result = l;
		result->next = merge_two_parts(l->next, r);
	}
	else
	{
		result = r;
		result->next = merge_two_parts(l, r->next);
	}
	return (result);
}

void	merge_sort(t_stack **stack)
{
	t_stack	*l;
	t_stack	*r;
	t_stack	*head;

	head = *stack;
	l = NULL;
	r = NULL;
	if (head == NULL)
		return ;
	if (head->next == NULL)
		return ;
	split_stack_in_two(head, &l, &r);
	merge_sort(&l);
	merge_sort(&r);
	*stack = merge_two_parts(l, r);
}
