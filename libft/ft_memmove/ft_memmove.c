/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:16:12 by yer-retb          #+#    #+#             */
/*   Updated: 2021/11/06 16:51:55 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

static void	*ft_memcpy(void *dst, void *src, size_t n)
{
	unsigned int	i;
	char			*str;
	char			*d;

	i = 0;
	str = (char *)src;
	d = (char *)dst;
	while (str[i] && i < n)
	{
		d[i] = str[i];
		i++;
	}
	return (dst);
}

void	*ft_memmove(void *dst, void *src, size_t n)
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
	{
		ft_memcpy(d, str, n);
	}
	return (0);
}

int	main(void)
{
	char s2[] = "Hello1337";
	char s1[] = "salut";

	memmove(s1 + 2, s2, 4);
	printf("mine %s \n", s1);
	ft_memmove(s1 + 2, s2, 4);
	printf("ther %s \n", s1);
}
