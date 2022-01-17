/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadali <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 22:32:22 by hadali            #+#    #+#             */
/*   Updated: 2022/01/10 15:14:32 by hadali           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen(str);
	if (!str || !c)
		return ((char *)str + ft_strlen(str));
	while (*str != (char)c)
	{
		str++;
		i++;
	}
	if (i + 1 > size)
		return (NULL);
	return ((char *)str);
}
