/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejlee <hyejlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 00:01:52 by hyejlee           #+#    #+#             */
/*   Updated: 2022/05/20 00:01:54 by hyejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_digits(int n)
{
	int		answer;

	answer = 0;
	if (n <= 0)
		answer++;
	while (n)
	{
		answer++;
		n = n / 10;
	}
	return (answer);
}

static int	get_abs(int num)
{
	if (num < 0)
		return (num * -1);
	return (num);
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*result;

	sign = 1;
	if (n < 0)
		sign *= -1;
	len = get_digits(n);
	result = (char *)malloc(len + 1);
	if (!result)
		return (0);
	result[len--] = 0;
	while (len >= 0)
	{
		result[len] = get_abs(n % 10) + '0';
		n = n / 10;
		len--;
	}
	if (sign == -1)
		result[0] = '-';
	return (result);
}
