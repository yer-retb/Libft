/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:23:13 by yer-retb          #+#    #+#             */
/*   Updated: 2021/11/14 14:37:17 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <unistd.h>

int		ft_isalpha(int i);
int		ft_isdigit(int i);
int		ft_isalnum(int i);
int		ft_isascii(int c);
int		ft_isprint(int c);
void	*ft_memset(void *b, int c, size_t len);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_atoi(const char *s);
char	*ft_strnstr(const char *str, const char *needle, size_t len);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

#endif
