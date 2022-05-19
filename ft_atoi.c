/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejlee <hyejlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:23:02 by hyejlee           #+#    #+#             */
/*   Updated: 2022/05/19 21:46:25 by hyejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char ch)
{
	if (ch == ' ' || (ch >= 9 && ch <= 13))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		pos;
	int		flag;
	size_t	res;

	pos = 0;
	while (str[pos] != '\0' && ft_isspace(str[pos]))
		++pos;
	flag = 1;
	if (str[pos] == '-')
		flag = -1;
	if (str[pos] == '-' || str[pos] == '+')
		++pos;
	res = 0;
	while (str[pos] != '\0' && str[pos] >= '0' && str[pos] <= '9')
	{
		res *= 10;
		res += (str[pos] - '0');
		++pos;
	}
	return (res * flag);
}
