/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadali <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 00:29:38 by hadali            #+#    #+#             */
/*   Updated: 2022/01/04 01:34:24 by hadali           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *str, char const *set)
{
	char	*res;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (str[start] && ft_char_in_set(str[start], set))
		start++;
	end = ft_strlen(str);
	while (end > start && ft_char_in_set(str[end - 1], set))
		end--;
	res = (char *)malloc(sizeof(*str) * (end - start + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (start < end)
		res[i++] = str[start++];
	res[i] = 0;
	return (res);
}
