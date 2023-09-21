/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@42student.ae>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 01:27:39 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/09/04 01:27:39 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void ft_putchar_fd(char c, int fd)

{
	write (fd, &c, 1);
}

int main()
{
	int fd = open("test", O_RDWR);
	ft_putchar_fd('a', fd);
	// printf("%d\n", fd);
}