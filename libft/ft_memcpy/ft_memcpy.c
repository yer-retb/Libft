/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:47:08 by yer-retb          #+#    #+#             */
/*   Updated: 2021/11/06 16:51:38 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, void *src, size_t n)
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

int	main(void)
{
	char s2[] = "Hello1337";
	char s1[] = "salut";

	memcpy(s1 + 2, s2, 4);
	printf("mine %s \n", s1);
	ft_memcpy(s1 + 2, s2, 4);
	printf("ther %s \n", s1);
}
