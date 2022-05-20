/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejlee <hyejlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 00:21:55 by hyejlee           #+#    #+#             */
/*   Updated: 2022/05/21 08:46:23 by hyejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_num(int n, int fd)
{
	char c;

	if (n >= 10)
	{
		print_num(n / 10, fd);
		print_num(n % 10, fd);
	}
	else if (n >= 0)
	{
		c = n + 48;
		write(fd, &c, 1);
	}
	else
	{
		write(fd, "-", 1);
		print_num(n * -1, fd);
	}
}

void	ft_putnbr(int n, int fd)
{
if (fd < 0)
		return ;
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else
		print_num(n, fd);
}
