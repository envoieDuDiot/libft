/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbryon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:19:55 by gbryon            #+#    #+#             */
/*   Updated: 2017/04/29 11:18:27 by gbryon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int tf)
{
	if (*str != (char)tf)
	{
		while (*str != (char)tf)
		{
			if (*str++ == '\0')
				return (NULL);
		}
	}
	return ((char *)str);
}
