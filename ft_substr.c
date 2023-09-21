/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@42student.ae>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 07:51:39 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/09/21 07:51:39 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.c"

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
size_t c;
size_t v;
char *str;

str = (char *) malloc(sizeof(char) * (len + 1));
if (str == 0)
{
	return(0);
}

c = start;
v = 0;

while(v < len)
{
	str[v] = s[c];
	c++;
	v++;
} 
str[v] = 0;

return(str);

}