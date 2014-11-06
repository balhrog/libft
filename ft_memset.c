/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquargnu <vquargnu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 10:04:29 by vquargnu          #+#    #+#             */
/*   Updated: 2014/11/06 10:24:10 by vquargnu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	char	*bloc;

	if (n > 0)
	{
		bloc = (char *)b;
		while (n)
		{
			*bloc++ = (char)c;
			n--;
		}
	}
	return (b);
}
