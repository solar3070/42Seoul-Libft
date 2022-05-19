/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejlee <hyejlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 00:02:57 by hyejlee           #+#    #+#             */
/*   Updated: 2022/05/20 00:02:58 by hyejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	s_len;
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	s_len = ft_strlen(s);
	while (i < s_len)
	{
		f(i, &s[i]);
		i++;
	}
}