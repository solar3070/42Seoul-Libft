/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejlee <hyejlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 00:21:55 by hyejlee           #+#    #+#             */
/*   Updated: 2022/05/20 00:22:25 by hyejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	print_num(unsigned int num, int fd)
{
	char	c;

	if (num <= 0)
		return ;
	print_num(num / 10, fd);
	c = num % 10 + '0';
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	if (fd < 0)
		return ;
	if (n < 0)
		write(fd, "-", 1);
	else if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n == -2147483648)
		num = 2147483648;
	else
	{
		if (n < 0)
			n *= -1;
		num = (unsigned int)n;
	}
	print_num(num, fd);
}
