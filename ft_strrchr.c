/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 00:32:57 by yer-retb          #+#    #+#             */
/*   Updated: 2021/11/14 02:14:21 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)

{
	int		i;
	char	*str;

	str = (char *)s;
	i = ft_strlen(str);
	if (c == '\0')
		return (&str[i]);
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == c)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
/*
int main()
{
	char x[] = "";
	printf("%s \n",ft_strrchr(x, 0));
	printf("%s \n", strrchr(x, 0));
}
*/