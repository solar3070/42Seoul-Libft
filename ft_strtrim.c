/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejlee <hyejlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:55:47 by hyejlee           #+#    #+#             */
/*   Updated: 2022/05/19 23:59:38 by hyejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start_ptr;
	char	*end_ptr;
	char	*answer;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	start_ptr = (char *)s1;
	while (*start_ptr && ft_strchr(set, *start_ptr))
		start_ptr++;
	if (!(*start_ptr))
		return (ft_strdup(""));
	end_ptr = (char *)s1;
	while (*end_ptr)
		end_ptr++;
	end_ptr--;
	while (start_ptr < end_ptr && ft_strchr(set, *end_ptr))
		end_ptr--;
	if (start_ptr >= end_ptr)
		return (ft_strdup(""));
	answer = (char *)malloc((end_ptr - start_ptr + 1) + 1);
	if (!answer)
		return (0);
	ft_strlcpy(answer, start_ptr, (end_ptr - start_ptr + 1) + 1);
	return (answer);
}
