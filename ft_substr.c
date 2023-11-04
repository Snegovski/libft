/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:58:50 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/10/31 13:58:50 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	size_t	v;
	char	*str;

	if (start > (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (len > (unsigned long)ft_strlen(s))
		len = (unsigned long)ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	v = 0;
	while (v < len && s[start] != '\0')
	{
		str[v] = s[start];
		start++;
		v++;
	}
	str[v] = '\0';
	return (str);
}

// int	main(void)
// {
// 	char * s = ft_substr("tripouille", 0, 42000);
// 	printf("%s", s);
// }
