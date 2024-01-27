/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrigrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:11:55 by hrigrigo          #+#    #+#             */
/*   Updated: 2024/01/15 18:12:57 by hrigrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	size_src;
	size_t	size_dest;

	i = 0;
	size_src = ft_strlen(src);
	if (size == 0)
		return (size_src);
	size_dest = ft_strlen(dest);
	if (size_dest >= size)
		return (size + size_src);
	while (src[i] && (size_dest + i) < size - 1)
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	if (size_dest + i < size)
		return (size_dest + size_src);
	return (size + size_src);
}
