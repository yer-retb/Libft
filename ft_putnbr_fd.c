/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 21:01:30 by yer-retb          #+#    #+#             */
/*   Updated: 2021/11/24 21:15:32 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <fcntl.h>

void	ft_putnbr_fd(int n, int fd)
{
	long int	num;
	char		a;

	num = (long int) n;
	if (num < 0)
	{
		num = -num;
		write(fd, "-", 1);
	}
	if (num < 10)
	{
		a = num + 48;
		write(fd, &a, 1);
	}
	else
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putnbr_fd(num % 10, fd);
	}
}
/*
int main()
{
	int i = 1337;
	int fd = open ("unum.txt", O_RDWR | O_CREAT, 0777);
	ft_putnbr_fd(i , fd);
}*/
