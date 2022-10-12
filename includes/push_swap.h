/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:27:31 by vivan-de          #+#    #+#             */
/*   Updated: 2022/10/12 10:49:30 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libs/libft/libft.h"

int		has_duplicates(t_list *stack);
t_list	*generate_stack(char **argv);
void	print_stack(t_list *stack);
void	error(const char *msg, int status);
void	clear_stack(t_list *stack);

#endif