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

static int	get_number_digits(int n)
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

static int	get_abs_num(int num)
{
	if (num < 0)
		return (num * -1);
	return (num);
}

char	*ft_itoa(int n)
{
	int		len;
	int		minus_flag;
	char	*result;

	minus_flag = 1;
	if (n < 0)
		minus_flag *= -1;
	len = get_number_digits(n);
	result = (char *)malloc(len + 1);
	if (!result)
		return (0);
	result[len--] = 0;
	while (len >= 0)
	{
		result[len] = get_abs_num(n % 10) + '0';
		n = n / 10;
		len--;
	}
	if (minus_flag == -1)
		result[0] = '-';
	return (result);
}
