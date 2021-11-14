/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 04:03:29 by yer-retb          #+#    #+#             */
/*   Updated: 2021/11/14 15:40:50 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>


s -> 2147483647
s -> -2147483647
int	ft_atoi(const char *s)
{
	unsigned long	rsl;
	int			sn;
	int			i;

	sn = 1;
	i = 0;
	rsl = 0;
	if (overflow_check(s))
		return -1;
	while ((s[i] == 32) || (s[i] >= 9 && s[i] <= 13))
		i++;
	if ((s[i] == '-') || (s[i] == '+'))
	{
		if (s[i] == '-')
			sn = -1;
		i++;
	}
	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		rsl = rsl * 10 +  s[i] - '0';
		printf("%lu\n", rsl);
		i++;
	}
	if (rsl >= 9223372036854775807 && sn == -1)
		return (0);
	else if (rsl >= 9223372036854775807 && sn == 1)
		return (-1);
	return (sn * rsl);
}
int main()
{
	char x[] = "184467440737095516156";
	printf("%i\n", ft_atoi(x));
	printf("%i\n", atoi(x));
}
// lentgh