/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:05:25 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/11/05 19:27:55 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)

{
	t_list	*new_mode;

	new_mode = malloc(sizeof(t_list));
	if (!new_mode)
		return (NULL);
	if (new_mode)
	{
		new_mode->content = content;
		new_mode->next = NULL;
	}
	return (new_mode);
}
