/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:16:12 by yer-retb          #+#    #+#             */
/*   Updated: 2021/11/14 09:05:50 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char			*str;
	char			*d;
	unsigned int	j;

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
		return (d);
	}
	if (d < str)
		ft_memcpy(d, str, n);
	return (0);
}
/*
int	main(void)
{
	char s2[] = "lorem ipsum dolor sit amet";
	//char s1[] = s2 + 1;
	memmove(s2, s2 + 1, 0);
	printf("mine %s \n", s2);
	ft_memmove(s2, s2 + 1, 0);
	printf("ther %s \n", s2);
}
*/