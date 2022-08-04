/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuyukgu <sbuyukgu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 20:26:46 by sbuyukgu          #+#    #+#             */
/*   Updated: 2022/07/02 19:22:27 by sbuyukgu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*buffer;

	buffer = (void *) malloc(size * n);
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, size * n);
	return (buffer);
}
