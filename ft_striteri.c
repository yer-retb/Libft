/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 23:11:18 by yer-retb          #+#    #+#             */
/*   Updated: 2021/11/24 15:33:15 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	y(unsigned int j, char *w)
{
	*w += j;
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int main ()
{
	char 	x[] = "00000";
	ft_striteri(x, y);
	printf("%s \n", x);
}
*/