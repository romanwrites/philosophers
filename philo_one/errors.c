/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkristie <mkristie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 19:21:37 by mkristie          #+#    #+#             */
/*   Updated: 2020/12/01 19:21:38 by mkristie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_one.h"

void		ft_alloc_check(void *ptr)
{
	if (!ptr)
	{
		g_error = FATAL_ERR;
	}
}
