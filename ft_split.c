/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyejlee <hyejlee@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 00:59:52 by hyejlee           #+#    #+#             */
/*   Updated: 2022/05/20 02:27:58 by hyejlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	word_count(char const *str, char c)
{
	int	cnt;

	cnt = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str == '\0')
			break ;
		while (*str != c && *str != '\0')
			str++;
		cnt++;
	}
	return (cnt);
}

char	*split_str(char const *start, int len)
{
	int		i;
	char	*str;

	str = (char *) malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < len)
		str[i++] = *start++;
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *str, char c)
{
	char		**arr;
	char const	*start;
	int			len;
	int			i;

	arr = (char **) malloc(sizeof(char *) * (word_count(str, c) + 1));
	i = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str == '\0')
			break ;
		start = str;
		len = 0;
		while (*str != c && *str != '\0')
		{
			len++;
			str++;
		}
		arr[i++] = split_str(start, len);
	}
	arr[i] = 0;
	return (arr);
}
