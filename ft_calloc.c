/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadali <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:15:19 by hadali            #+#    #+#             */
/*   Updated: 2022/01/12 13:53:52 by hadali           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*buf;

	i = count * size;
	if (i > 0X7FFFFFFF)
		return (NULL);
	buf = (void *)malloc(i);
	if (!buf)
		return (NULL);
	ft_bzero(buf, i);
	return (buf);
}
