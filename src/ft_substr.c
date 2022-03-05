/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:56:05 by eestelle          #+#    #+#             */
/*   Updated: 2022/03/05 16:57:17 by eestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		if (*(ptr) == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
	}
	return ((void *)0);
}

static size_t	ft_strlen(const char *s)
{
	return ((size_t)ft_memchr(s, '\0', -1) - (size_t)s);
}

static size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (i < dstsize - 1 && src[i] && dstsize > 0)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_str;
	char	*result;

	if (!s)
		return (NULL);
	len_str = ft_strlen(s);
	if (start > len_str)
		start = len_str;
	if (len_str - start >= len)
		len_str = len;
	else
		len_str = len_str - start;
	result = (char *)malloc(sizeof(char) * (len_str + 1));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s + start, len_str + 1);
	return (result);
}
