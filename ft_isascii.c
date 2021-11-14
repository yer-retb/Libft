/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:59:08 by yer-retb          #+#    #+#             */
/*   Updated: 2021/11/11 15:40:07 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*#include <ctype.h>
int main(int ac, char **av)
{
	if (ac > 1)
		printf("my %i \n",ft_isascii(av[1][0]));
	printf("ther %i \n",isascii(*av[1]));
	return (0);
}*/
