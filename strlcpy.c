# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    strlcpy                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ral-bakr <ral-bakr@42student.ae>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 04:33:46 by ral-bakr          #+#    #+#              #
#    Updated: 2023/08/23 04:33:46 by ral-bakr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include "libft.h"

int ft_strlcpy(char *dest, char *src, int n) 

{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] && i < dstsize -1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
