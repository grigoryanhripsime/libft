/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrigrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 19:02:53 by hrigrigo          #+#    #+#             */
/*   Updated: 2024/01/15 15:40:58 by hrigrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_size;

	i = 0;
	src_size = ft_strlen(src);
	if (size == 0)
		return (src_size);
	if (src_size < size)
	{
		while (src[i])
		{
			dst[i] = src[i];
			i++;
		}
	}
	else if (src_size >= size)
	{
		while (i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	return (src_size);
}
