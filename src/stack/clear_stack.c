/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:13:53 by vivan-de          #+#    #+#             */
/*   Updated: 2022/10/12 11:14:11 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*
 * Not needed free the content of the list because
 * the content is a pointer to the original argv
 * and it is not allocated in the heap
 */
static void	clear_fn(void *_)
{
	(void)_;
}

void	clear_stack(t_list *stack)
{
	ft_lstclear(&stack, clear_fn);
}
