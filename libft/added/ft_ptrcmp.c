/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptrcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swilmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:58:23 by swilmer           #+#    #+#             */
/*   Updated: 2021/10/08 07:38:45 by swilmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ptrcmp(void *p1, void *p2)
{
	if (p1 == p2)
		return (0);
	if (p1 > p2)
		return (1);
	return (-1);
}
