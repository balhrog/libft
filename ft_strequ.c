/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquargnu <vquargnu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:58:43 by vquargnu          #+#    #+#             */
/*   Updated: 2014/11/06 16:14:10 by vquargnu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	unsigned int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i++]);
	if (s1[i] == s2[i])
		return (1);
	else
		return (0);
}
