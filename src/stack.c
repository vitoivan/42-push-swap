/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:39:50 by vivan-de          #+#    #+#             */
/*   Updated: 2022/10/12 11:05:48 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*generate_stack(char **argv)
{
	int		i;
	t_list	*stack;

	i = 1;
	stack = ft_lstnew(argv[i++]);
	while (argv[i])
		ft_lstadd_back(&stack, ft_lstnew(argv[i++]));
	return (stack);
}

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
