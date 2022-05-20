/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejlee <hyejlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 00:18:29 by hyejlee           #+#    #+#             */
/*   Updated: 2022/05/20 00:53:50 by hyejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h_len;
	size_t	n_len;

	if (*needle == '\0')
		return ((char *)haystack);
	h_len = ft_strlen(haystack);
	n_len = ft_strlen(needle);
	if (h_len < n_len || n_len > len)
		return (0);
	while (n_len <= len-- && *haystack)
	{
		if (ft_memcmp(haystack, needle, n_len) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
