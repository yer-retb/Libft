/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:37:36 by yer-retb          #+#    #+#             */
/*   Updated: 2021/11/11 15:29:05 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int i)
{
	if ((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z'))
		return (1);
	return (0);
}
/*int main (int ac, char **av)
{
	if (ac > 1)
	{
		printf("my is %i \n",ft_isalpha(av[1][0]));
	}
	return (0);
}*/
