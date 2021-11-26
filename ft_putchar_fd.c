/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:19:25 by yer-retb          #+#    #+#             */
/*   Updated: 2021/11/25 17:28:38 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)

{
	write (fd, &c, 1);
}

// int main()
// {
// 	int	fd = open ("tst.txt", O_RDWR | O_CREAT, 777);
// 	ft_putchar_fd('s', fd);
// }
