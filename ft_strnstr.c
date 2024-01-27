/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrigrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:56:21 by hrigrigo          #+#    #+#             */
/*   Updated: 2024/01/25 16:59:45 by hrigrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	lit_size;
	size_t	big_size;

	lit_size = ft_strlen(little);
	if (lit_size == 0)
		return ((char *) big);
	if (len == 0)
		return (0);
	big_size = ft_strlen(big);
	i = 0;
	while ((i + lit_size) <= len && i < big_size)
	{
		if (ft_strncmp(big + i, little, lit_size) == 0)
			return ((char *) big + i);
		i++;
	}
	return (0);
}
