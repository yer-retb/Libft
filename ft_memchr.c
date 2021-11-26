/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:05:17 by yer-retb          #+#    #+#             */
/*   Updated: 2021/11/24 22:43:59 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)

{
	size_t				i;
	unsigned char		*s;

	s = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (s[i] == (unsigned char )c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char x[] = {0,1,2,3,4,5};
	printf("%s \n",ft_memchr(x, 2 + 256, 3));
	printf("%s \n", memchr(x, 2 + 256, 3));
}*/