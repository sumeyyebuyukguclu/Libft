/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuyukgu <sbuyukgu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 20:26:31 by sbuyukgu          #+#    #+#             */
/*   Updated: 2022/07/03 12:15:51 by sbuyukgu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d;
	size_t	s;

	d = 0;
	s = 0;
	while (dest[d] && (d < size))
		d++;
	while (src[s] && d + s + 1 < size)
	{
		dest[s + d] = src[s];
		s++;
	}
	if (d < size)
		dest[d + s] = '\0';
	return (d + ft_strlen(src));
}
