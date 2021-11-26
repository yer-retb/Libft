/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:48:03 by yer-retb          #+#    #+#             */
/*   Updated: 2021/11/24 22:53:01 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)

{
	int		i;

	i = ft_strlen(s);
	if (c == '\0')
		return ((char *)&s[i]);
	i = 0;
	while (s[i])
	{
		if (s[i] == (char )c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char x[] = "hello world 1337";
	printf("%s \n",ft_strchr(x, 'l'));
	printf("%s \n", strrchr(x, 'l'));
}
*/