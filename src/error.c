/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:19:59 by vivan-de          #+#    #+#             */
/*   Updated: 2022/10/12 10:30:20 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	error(const char *msg, int status)
{
	char	*str;

	str = ft_strdup(msg);
	ft_putstr_fd(str, 2);
	free(str);
	exit(status);
}
