/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:18:28 by yer-retb          #+#    #+#             */
/*   Updated: 2021/11/22 17:00:11 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
/*
int main()
{
	char x[] = "hello world";
	//size_t i = 2;

	ft_bzero(x, 2);
	printf("mine %s\n", x);
	bzero(x, 2);
	printf("ther %s\n", x);
}
*/