/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:27:31 by vivan-de          #+#    #+#             */
/*   Updated: 2022/10/12 12:23:10 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libs/libft/libft.h"

t_list	*generate_stack(char **argv);
void	print_stack(t_list *stack);
void	error(void);
void	clear_stack(t_list *stack);
void	check_stack(t_list *stack);

#endif