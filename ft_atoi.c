/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejlee <hyejlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:23:02 by hyejlee           #+#    #+#             */
/*   Updated: 2022/05/21 10:15:09 by hyejlee          ###   ########.fr       */
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
	int		i;
	int		sign;
	size_t	num;

	i = 0;
	while (str[i] != '\0' && ft_isspace(str[i]))
		i++;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	num = 0;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
		num = num * 10 + str[i++] - '0';
	return (num * sign);
}
