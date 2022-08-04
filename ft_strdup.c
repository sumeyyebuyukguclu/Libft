/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuyukgu <sbuyukgu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 20:27:00 by sbuyukgu          #+#    #+#             */
/*   Updated: 2022/06/27 14:36:49 by sbuyukgu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	i;
	char	*new;

	new = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	i = 0;
	if (!new)
		return (NULL);
	while (i < ft_strlen(str))
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
