/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmenegau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:40:57 by rmenegau          #+#    #+#             */
/*   Updated: 2016/06/08 13:44:08 by rmenegau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	size_t	pow;
	char	*r;

	pow = 1;
	while (n / ft_power(10, pow) != 0)
		pow++;
	r = (char *)malloc(sizeof(char) * (pow + (n < 0)));
	r[0] = n < 0 ? '-' : '\0';
	n = n < 0 ? n : -n;
	r[pow + (r[0] == '-')] = '\0';
	while (pow-- != 0)
	{
		r[pow + (r[0] == '-')] = -(n % 10) + '0';
		n /= 10;
	}
	return (r);
}
