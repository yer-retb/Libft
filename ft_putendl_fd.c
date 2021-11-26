/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 20:55:20 by yer-retb          #+#    #+#             */
/*   Updated: 2021/11/24 21:17:51 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <fcntl.h>

void	ft_putendl_fd(char *s, int fd)

{
	if (!s)
		return ;
	while (*s)
		write (fd, s++, 1);
	write (fd, "\n", 1);
}
/*
int main()
{
	char x[] = "hello";
	int fd = open ("ho.txt", O_RDWR | O_CREAT, 0777);

	ft_putendl_fd(x, fd);
}*/