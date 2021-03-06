/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:59:14 by yer-retb          #+#    #+#             */
/*   Updated: 2021/11/13 19:44:13 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)

{
	size_t	i;
	size_t	len_d;
	size_t	len_s;

	i = 0;
	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	if (dstsize <= len_d || dstsize == 0)
		return (len_s + dstsize);
	while ((i + len_d < dstsize - 1) && src[i] != '\0')
	{
		dst[len_d + i] = src[i];
		i++;
	}
	dst[len_d + i] = '\0';
	return (len_d + len_s);
}
/*
int main()
{
	char x[] = "hello";
	char y[] = "salut";

	printf("%zu \n", ft_strlcat(x, y, 2));
	printf("%lu \n", strlcat(x, y, 2));
}
*/