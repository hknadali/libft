/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadali <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 19:47:23 by hadali            #+#    #+#             */
/*   Updated: 2022/01/10 14:58:37 by hadali           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (!len || dst == src)
		return (dst);
	if (dst < src)
		while (len--)
			*d++ = *s++;
	else
	{
		while (len--)
			d[len] = s[len];
	}
	return (dst);
}
