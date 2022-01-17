/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadali <hadali@42istanbul.com.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 19:17:48 by hadali            #+#    #+#             */
/*   Updated: 2022/01/05 19:21:28 by hadali           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*pos;

	count = 0;
	pos = lst;
	while (pos != NULL)
	{
		pos = pos->next;
		count++;
	}
	return (count);
}
