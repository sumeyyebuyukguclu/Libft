/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuyukgu <sbuyukgu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 19:04:56 by sbuyukgu          #+#    #+#             */
/*   Updated: 2022/07/02 19:31:50 by sbuyukgu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)str1 + i) == *((unsigned char *)str2 + i))
			i++;
		else
			return (*((unsigned char *)str1 + i) - \
						(*((unsigned char *)str2 + i)));
	}
	return (0);
}
