/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrigrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 18:45:55 by hrigrigo          #+#    #+#             */
/*   Updated: 2024/01/15 16:00:37 by hrigrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*src1;
	unsigned char	*dst1;

	if (!src && !dst)
		return (NULL);
	i = 0;
	src1 = (unsigned char *) src;
	dst1 = (unsigned char *) dst;
	if (dst > src)
	{
		while (len > 0)
		{
			dst1[len - 1] = src1[len - 1];
			len--;
		}
		return (dst1);
	}
	while (i < len)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst1);
}
