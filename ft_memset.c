/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejlee <hyejlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 00:08:24 by hyejlee           #+#    #+#             */
/*   Updated: 2022/05/20 00:08:26 by hyejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int c, size_t n)
{
	unsigned char	*new_dst;
	unsigned char	src;
	size_t			i;

	new_dst = dst;
	src = c;
	i = 0;
	while (i++ < n)
		*new_dst++ = src;
	return (dst);
}
