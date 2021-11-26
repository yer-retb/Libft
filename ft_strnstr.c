/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 10:40:53 by yer-retb          #+#    #+#             */
/*   Updated: 2021/11/20 15:04:05 by yer-retb         ###   ########.fr       */
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
	while ((str[i]) && (i < len))
	{
		j = 0;
		while (str[i + j] == needle[j] && i + j < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)&str[i]);
		}
		i++;
	}
	return (0);
}

// int main()
// {
// 	char *s1 = "MZIRIBMZIRIBMZE123";
// 	char *s2 = "MZIRIBMZ";
// 	size_t max = strlen(s2);
// 	printf("%s \n", ft_strnstr(s1, s2, 8));
// }
