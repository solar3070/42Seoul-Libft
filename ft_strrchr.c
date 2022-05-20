/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejlee <hyejlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 00:26:10 by hyejlee           #+#    #+#             */
/*   Updated: 2022/05/20 00:26:28 by hyejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	size_t	i;

	last = (char *)s;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (last[i] == (unsigned char)c)
			return (last + i);
		i--;
	}
	if (last[i] == (unsigned char)c)
		return (last);
	return (0);
}
