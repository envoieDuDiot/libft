/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbryon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/09 02:37:20 by gbryon            #+#    #+#             */
/*   Updated: 2017/05/09 11:46:38 by gbryon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_ispunct(int c)
{
	if ((c >= 33 && c <= 47) ||
		(c >= 58 && c <= 64) ||
		(c >= 91 && c <= 96) ||
		(c >= 123 && c <= 126))
		return (1);
	return (0);
}
