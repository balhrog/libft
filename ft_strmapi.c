/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquargnu <vquargnu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:25:52 by vquargnu          #+#    #+#             */
/*   Updated: 2014/11/06 15:57:24 by vquargnu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dst;
	size_t	index;
	size_t	len;

	len = strlen(s);
	index = 0;
	dst = (char *)malloc(len);
	while (s[index])
		dst[index] = (*f)(index, s[index++]);
	dst[index] = '\0';
	return (dst);
}

