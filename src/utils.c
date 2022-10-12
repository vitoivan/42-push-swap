/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:10:22 by vivan-de          #+#    #+#             */
/*   Updated: 2022/10/12 11:31:24 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	has_duplicates(t_list *stack)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = stack;
	while (tmp)
	{
		tmp2 = tmp->next;
		while (tmp2)
		{
			if (!ft_strcmp(tmp->content, tmp2->content))
				return (1);
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
	return (0);
}
