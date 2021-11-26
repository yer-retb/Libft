/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 20:34:31 by yer-retb          #+#    #+#             */
/*   Updated: 2021/11/24 21:18:08 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)

{
	if (!s)
		return ;
	while (*s)
		write (fd, s++, 1);
}
/*
int main()
{
	char x[] = "hello";
	int fd = open ("hello.txt", O_RDWR | O_CREAT, 0777);

	ft_putstr_fd(x, fd);
}*/
