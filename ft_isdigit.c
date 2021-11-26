/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:12:22 by yer-retb          #+#    #+#             */
/*   Updated: 2021/11/11 15:30:06 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int i)
{
	if (i >= '0' && i <= '9')
		return (1);
	return (0);
}
/*#include <ctype.h>
int main(int ac, char **av)
{
	if (ac > 1)
	{
		printf("my %i \n",ft_isdigit(av[1][0]));
	}
	printf("ther %i \n",ft_isdigit(*av[1]));
	return(0);
}*/