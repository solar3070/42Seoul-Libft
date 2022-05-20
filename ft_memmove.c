/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejlee <hyejlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:44:12 by hyejlee           #+#    #+#             */
/*   Updated: 2022/05/20 00:21:01 by hyejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*tmp_dst;
	unsigned char		*tmp_src;

	if (dst == src || n == 0)
		return (dst);
	if (dst < src)
	{
		tmp_dst = (unsigned char *)dst;
		tmp_src = (unsigned char *)src;
		while (n--)
			*tmp_dst++ = *tmp_src++;
	}
	else
	{
		tmp_dst = (unsigned char *)dst + (n - 1);
		tmp_src = (unsigned char *)src + (n - 1);
		while (n--)
			*tmp_dst-- = *tmp_src--;
	}
	return (dst);
}
