/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-bakr <ral-bakr@42student.ae>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 04:50:31 by ral-bakr          #+#    #+#             */
/*   Updated: 2023/08/14 04:50:31 by ral-bakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

int ft_atoi( char *str);
int ft_strlen( char *str );
char	*ft_strchr(const char *s, int c);
int ft_strlcpy(char *dest, char *src, int n);

#endif