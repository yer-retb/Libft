/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:16:12 by yer-retb          #+#    #+#             */
/*   Updated: 2021/11/24 22:27:32 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char			*str;
	char			*d;
	unsigned int	j;

	if (!dst && !src)
		return (0);
	str = (char *)src;
	d = (char *)dst;
	if (str == d)
		return (str);
	if (d > str)
	{
		j = n - 1;
		while (j + 1 > 0)
		{
			d[j] = str[j];
			j--;
		}
		return (dst);
	}
	if (d < str)
		ft_memcpy(d, str, n);
	return (dst);
}
/*
int	main(void)
{
	char s[] = {65, 66, 67, 68, 69, 0, 45};
	char s0[] = {0,0,0,0,0,0,0};
ft_memmove(s0, s0, 7);
	printf("mine %s \n", s0);
	memmove(s0, s0, 7);
	printf("ther %s \n", s0);
}*/