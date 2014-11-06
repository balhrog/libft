/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquargnu <vquargnu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 13:32:19 by vquargnu          #+#    #+#             */
/*   Updated: 2014/11/06 15:53:17 by vquargnu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*dst;
	size_t	len;

	len = ft_strlen(s);
	dst = (char *)malloc(len);
	while (len--)
		dst[len] = (*f)(s[len]);
	return (dst);
}
