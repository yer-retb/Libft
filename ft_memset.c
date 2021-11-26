/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:04:24 by yer-retb          #+#    #+#             */
/*   Updated: 2021/11/15 22:54:23 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = (char *)b;
	while (i < len)
	{
		str[i] = (char)c;
		i++;
	}
	return (b);
}
/*
int	main()
{
	char	c [20] = "hello world";
	char	b [20] = "hello world";
	//char x = 'n';
	//ft_memset(c + 4, 'z', 8*sizeof(char));
	//printf("%s", c);
	//printf("%s \n", memset(c + 2, x, 8*sizeof(char)));
	//char str[50] = "GeeksForGeeks is for programming geeks.";
    //printf("\nBefore memset(): %s\n", b);
    //Fill 8 characters starting from str[13] with '.'
    //memset(b + 4, 'z', 8*sizeof(char));
    //printf("After memset():  %s", b);
	ft_memset(c + 2, '0',4);
	printf("%s",c);
   	return (0);
}
*/