# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    strlcat                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ral-bakr <ral-bakr@42student.ae>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 04:45:56 by ral-bakr          #+#    #+#              #
#    Updated: 2023/08/23 04:45:56 by ral-bakr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

int ft_strlcat( char dest, char src, int n)

{
	size_t	d;
	size_t	i;
	size_t	s;

	if (dst == NULL && dstsize == 0)
		return (0);
	s = ft_strlen(src);
	d = ft_strlen(dst);
	if (d >= dstsize)
		return (dstsize + s);
	i = 0;
	while (i < s && i + d + 1 < dstsize)
	{
		dst[d + i] = src[i];
		i++;
	}
		dst[d + i] = '\0';
	if (dstsize < d)
		d = dstsize;
	return (d + s);
}