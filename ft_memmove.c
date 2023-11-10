/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:16:02 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/11/10 16:12:08 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)

{
	unsigned char		*c;
	const unsigned char	*v;
	size_t				b;

	b = 0;
	c = (unsigned char *)dst;
	v = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (v < c)
	{
		while (++b <= len)
			c[len - b] = v[len - b];
	}
	else
	{
		while (b < len)
		{
			c[b] = v[b];
			b++;
		}
	}
	return (dst);
}

// int	main(void)
// {
// 	char	src[] = "lorem ipsum dolor sit amet";
// 	char	*dest;

// 	dest = src + 1;
// 	printf("%p\n", ft_memmove(dest, src, 8));
// 	printf("%p\n", memmove(dest, src, 8));
// 	return (0);
// }

// int main(void)

// {
// 	char s [] = "hello world";
// 	// char v [] = "Salve commodus";
// 	printf("%s\n", ft_memmove(s, s + 6, 3));

// }
