/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@42student.ae>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 09:07:50 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/09/21 09:07:50 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)

{
	size_t c;
	size_t v;
	char *str;

	str = 0;
	if(s1 != 0 && set != 0 && s1[0] != '\0')
	{
		c = 0;
		while(s1[c] && ft_strchr(set, s1(c)))
		{
			c++;
		}
		v = ft_strlen(s1);
		while(s1[ v - 1] && ft_strchr(set, s1[v - 1]) && v < c)
		{
			v--;
		}
		str = (char *) malloc(sizeof(char) * (v - c + 1));
		if (str != '\0')
		{
    		ft_strlcpy(str, &s1[i], v - c + 1);
		}
	}
	return(str);
}