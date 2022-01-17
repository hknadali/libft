/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadali <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 10:47:57 by hadali            #+#    #+#             */
/*   Updated: 2022/01/04 11:15:03 by hadali           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	val;

	if (size == 0)
		return (ft_strlen(src));
	else if (size < ft_strlen(dest))
		val = ft_strlen(src) + size;
	else
		val = ft_strlen(src) + ft_strlen(dest);
	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && i < (size - 1))
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (val);
}
