/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 10:40:53 by yer-retb          #+#    #+#             */
/*   Updated: 2021/11/14 11:32:39 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	unsigned long	i;
	int				j;

	i = 0;
	while (needle[i] == '\0')
		return ((char *)str);
	while ((str[i]) && (i < len - 1))
	{
		j = 0;
		while (str[i + j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)&str[i]);
		}
		i++;
	}
	return (0);
}

int main()
{
	char x[] = "MZIRIBMZIRIBMZE123";
	char t[] = "MZIRIBMZE";
	size_t max = strlen(t);

	printf("%s \n", ft_strnstr(x, t, max));
	printf("%s \n", strnstr(x, t, max));
}
