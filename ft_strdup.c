/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:20:48 by yer-retb          #+#    #+#             */
/*   Updated: 2021/11/24 17:23:48 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)

{
	int		i;
	int		j;
	char	*p;

	i = 0;
	while (s1[i])
		i++;
	p = (char *)malloc (i * sizeof(char) + 1);
	if (!p)
		return (NULL);
	else
	{
		j = 0;
		while (j < i)
		{
			p[j] = s1[j];
			j++;
		}
	}
	p[j] = '\0';
	return (p);
}

/*
int main ()
{
	char s[] = "hello world";
	printf("%s \n", ft_strdup(s));
	printf("%s \n", strdup(s));
}
*/