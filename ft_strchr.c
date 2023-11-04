/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:49:42 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/10/31 13:49:42 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

char	*ft_strchr(const char *s, int c)

{
	char	*str;

	str = (char *)s;
	while (*str && *str != (unsigned char) c)
	{
		str++;
	}
	if (!*str && ((unsigned char) c) != '\0')
		return (NULL);
	return (str);
}

// int main()
// {
// 	char str[10] = "emad";
// 	char c = '\0';
// 	char *s = ft_strchr(str, c);
// 	if (!s)
// 		printf("???");
// 	else
// 		printf("%s\n", s - 1);
// 	s = ft_strchr(str, 1024);
// 	if (!s)
// 		printf("!!");
// 	printf("%s\n", s);
// }