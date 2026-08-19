/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaslan <mehaslan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 15:31:59 by mehaslan          #+#    #+#             */
/*   Updated: 2026/08/18 17:50:01 by mehaslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

//#include <fcntl.h>
//int main()
//{
//	int fd;

//	fd = open("mehtap.txt", O_RDWR | O_CREAT | O_TRUNC, 0777);

//	ft_putchar_fd('d', fd);
	
//}

