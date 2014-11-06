/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vquargnu <vquargnu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 10:02:33 by vquargnu          #+#    #+#             */
/*   Updated: 2014/11/06 15:53:15 by vquargnu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

void		*ft_memset(void *b, int c, size_t n);
size_t		ft_strlen(const char *s);
char		*ft_strdup(const char *str);
char		*ft_strcpy(const char *restrict src, char *restrict dest);
char		*ft_strncpy(char *restrict dst, const char *restrict src, size_t n);
char		*ft_strcat(char *restrict dst, const char * restrict src);
char		*ft_strncat(char *restrict dst, const char *restrict src, size_t n);
void		*ft_memalloc(size_t size);
void		ft_memdel(void **ap);
char		*ft_strnew(size_t size);
void		ft_strdel(char **as);
void		ft_strclr(char *s);
void		ft_striter(char *s, void(*f)(char *));
void		ft_striteri(char *s, void(*f)(unsigned int, char *));
char		*ft_strmap(const char *s, char (*f)(char));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));

#endif
