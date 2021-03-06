/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquargnu <vquargnu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 10:28:21 by vquargnu          #+#    #+#             */
/*   Updated: 2014/11/06 10:30:29 by vquargnu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *restrict dst, const char *restrict src, size_t n)
{
	unsigned int index;
	unsigned int len;

	while(src[len++]);
	index = 0;
	while(index < len && index < n)
	{
		dst[index] = src[len];
		index++;
	}
	while(index < n)
	{
		dst[index] = '\0';
		index++;
	}
	return (dst);
}
