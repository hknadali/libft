/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadali <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 12:25:04 by hadali            #+#    #+#             */
/*   Updated: 2022/01/04 12:34:22 by hadali           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*temp;

	temp = (char *)malloc(sizeof(char) * \
			(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1));
	if (!s1 || !s2 || !temp)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		temp[j++] = s1[i++];
	i = 0;
	while (s2[i])
		temp[j++] = s2[i++];
	temp[j] = '\0';
	return (temp);
}
