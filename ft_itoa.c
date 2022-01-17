/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadali <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:46:27 by hadali            #+#    #+#             */
/*   Updated: 2022/01/06 20:24:37 by hadali           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_divide(char *x, unsigned int nbr, long int len)
{
	while (nbr > 0)
	{
		x[len--] = 48 + (nbr % 10);
		nbr /= 10;
	}
	return (x);
}

static long int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	unsigned int	nbr;
	long int		len;
	char			*str;

	len = ft_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		nbr = n * -1;
		str[0] = '-';
	}
	else
		nbr = n;
	str = ft_divide(str, nbr, len);
	return (str);
}
