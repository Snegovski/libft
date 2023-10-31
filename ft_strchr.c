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

char	*ft_strchr(const char *s, int c)

{
	char	*str;

	str = (char *)s;
	while (*str && *str != c)
	{
		str++;
	}
	if (!*str && c != '\0')
		return (NULL);
	return (str);
}
