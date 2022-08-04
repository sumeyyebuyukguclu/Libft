/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuyukgu <sbuyukgu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:33:37 by sbuyukgu          #+#    #+#             */
/*   Updated: 2022/07/03 12:07:39 by sbuyukgu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	unsigned int	len;
	long			m;

	m = n;
	len = 0;
	if (m < 0)
	{
		len++;
		m *= -1;
	}
	while (m > 9)
	{
		m /= 10;
		len++;
	}
	return (len + 1);
}

char	*ft_itoa(int n)
{
	char	*number;
	int		revind;
	int		misign;
	long	m;

	m = n;
	misign = 0;
	revind = ft_numlen(n);
	number = (char *)malloc(sizeof(char) * (ft_numlen(n) + 1));
	if (!number)
		return (NULL);
	number[revind] = '\0';
	if (m < 0)
	{
		misign = 1;
		m *= -1;
		number[0] = '-';
	}
	while (revind-- > misign)
	{
		number[revind] = (m % 10) + '0';
		m /= 10;
	}
	return (number);
}
