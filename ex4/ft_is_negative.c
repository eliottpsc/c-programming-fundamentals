/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruffin <eruffin@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 12:04:26 by eruffin           #+#    #+#             */
/*   Updated: 2026/03/04 12:29:47 by eruffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(signed int n);

void	ft_is_negative(signed int n)
{
	signed int	sign;

	sign = 'P';
	if (n < 0)
	{
		sign = 'N';
	}
	write(1, &sign, 1);
}
