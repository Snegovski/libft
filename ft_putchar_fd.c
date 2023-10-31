/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:45:34 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/10/31 13:45:34 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)

{
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	int fd = open("test", O_RDWR);
// 	ft_putchar_fd('a', fd);
// 	// printf("%d\n", fd);
// }