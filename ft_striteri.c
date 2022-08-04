/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuyukgu <sbuyukgu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:56:03 by sbuyukgu          #+#    #+#             */
/*   Updated: 2022/07/02 19:33:17 by sbuyukgu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	ind;

	ind = 0;
	if (!s || !f)
		return ;
	while (s[ind])
	{
		f(ind, (s + ind));
		ind++;
	}
}
