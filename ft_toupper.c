/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:47:01 by yer-retb          #+#    #+#             */
/*   Updated: 2021/11/22 17:00:11 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/*int	main()
{
	char s[20] = "mabghatch tkhdem";
	printf("%c ||| %c \n",toupper(s[4]), ft_toupper(s[4]));
}
*/