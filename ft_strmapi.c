/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:04:29 by yer-retb          #+#    #+#             */
/*   Updated: 2021/11/24 15:34:58 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	c(unsigned int i, char c)
{
	c -= 32;
	return (c);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))

{
	char	*str;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int main()
{
	char x[] = "yassine";
	printf("%s \n", ft_strmapi(x, c));
}
*/