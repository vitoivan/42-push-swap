/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:27:31 by vivan-de          #+#    #+#             */
/*   Updated: 2022/11/14 01:40:48 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libs/libft/libft.h"

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

typedef struct s_ctx
{
	t_stack			*a;
	t_stack			*b;
	t_stack			*index_stack;

	t_stack			*sorted_a;
	char			**args;
	int				argc;
	t_list			*instructions;
}					t_ctx;

typedef struct s_generate_index_stack
{
	t_stack			*a;
	t_stack			*tmp;
	int				value;
	int				i;
}					t_gis;

// Utils
int					is_signal(char ch);
char				**get_args(char **argv);

// Stack
void				ft_stack_add_back(t_stack **stack, t_stack *new);
void				ft_stack_add_front(t_stack **stack, t_stack *new);
t_stack				*ft_stack_new(int value);
void				print_stack(t_stack *stack);
void				clear_stack(t_stack *stack);
t_stack				*generate_stack(char **argv);

void				error(void);
int					check_args(char **args);
void				init_ctx(t_ctx *ctx, char **args);
void				push_swap(int argc, char **argv);
// Actions
void				sa(t_ctx *ctx);
void				sb(t_ctx *ctx);
void				ss(t_ctx *ctx);
void				pa(t_ctx *ctx);
void				pb(t_ctx *ctx);
void				ra(t_ctx *ctx);
void				rb(t_ctx *ctx);
void				rr(t_ctx *ctx);
void				rra(t_ctx *ctx);
void				rrb(t_ctx *ctx);
void				rrr(t_ctx *ctx);
void				swap_top(t_stack **stack);
int					pop_first(t_stack **stack);
int					pop_last(t_stack **stack);
void				shift(t_stack **stack);
void				reverse_shift(t_stack **stack);

void				merge_sort(t_stack **stack);
int					is_sorted(t_stack *stack);
void				clear_ctx(t_ctx *ctx);
void				radix_sort(t_ctx *ctx, int argc);
int					get_stack_len(t_stack *stack);
void				generate_index_stack(t_ctx *ctx);
void				copy_stack(t_stack *src, t_stack *dst);
void				sort(t_ctx *ctx);
int					get_lower_ind(t_stack *stack);
void				push_to_n_to_b(t_ctx *ctx, int ind);
#endif