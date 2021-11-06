/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:12:39 by yer-retb          #+#    #+#             */
/*   Updated: 2021/11/02 19:38:59 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isprint(char c)
{
	return (c >= 32 && c <= 127);
}
/*#include <ctype.h>
int	main(int ac, char **av)
{
	if (ac > 1)
		printf ("my %d \n", ft_isprint(av[0][1]));
	printf ("ther %d \n", isprint(*av[0]));
}*/