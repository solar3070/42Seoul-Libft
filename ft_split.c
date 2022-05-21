/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejlee <hyejlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 00:59:52 by hyejlee           #+#    #+#             */
/*   Updated: 2022/05/21 10:43:08 by hyejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *str, char c)
{
	int	cnt;

	cnt = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str == '\0')
			break ;
		while ((*str != c) && *str != '\0')
			str++;
		cnt++;
	}
	return (cnt);
}

static char	*split_str(char const *start, int len)
{
	int		i;
	char	*str;

	str = (char *) malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	i = 0;
	while (i < len)
		str[i++] = *start++;
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char const	*start;
	char		**arr;
	int			len;
	int			i;

	arr = (char **) malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!arr)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			break ;
		start = s;
		len = 0;
		while ((*s != c) && *s != '\0')
		{
			len++;
			s++;
		}
		arr[i++] = split_str(start, len);
	}
	arr[i] = 0;
	return (arr);
}
