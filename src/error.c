/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:19:59 by vivan-de          #+#    #+#             */
/*   Updated: 2022/10/12 11:34:48 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	error(const char *msg, int status)
{
	char	*aux;
	char	*error_msg;

	aux = ft_strdup(msg);
	error_msg = ft_strjoin("\nError: ", aux);
	ft_putstr_fd(error_msg, 2);
	free(error_msg);
	free(aux);
	exit(status);
}
