/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbuyukgu <sbuyukgu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:58:25 by sbuyukgu          #+#    #+#             */
/*   Updated: 2022/07/02 19:32:53 by sbuyukgu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	if_word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static size_t	len_word(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s != '\0')
	{
		if (*s != c && (s[1] == '\0' || s[1] == c))
			len++;
		s++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{	
	size_t		i;
	size_t		j;
	size_t		len;
	char		**dizi;

	if (!s)
		return (NULL);
	len = len_word(s, c);
	dizi = malloc(sizeof(char *) * len + 1);
	if (dizi == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		while (*s == c && *s != '\0')
			s++;
		dizi[i] = malloc(sizeof(char) * if_word_len(s, c) + 1);
		j = 0;
		while (*s != c && *s != '\0')
			dizi[i][j++] = *s++;
		dizi[i][j] = '\0';
		i++;
	}
	dizi[i] = NULL;
	return (dizi);
}
