/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrigrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:00:41 by hrigrigo          #+#    #+#             */
/*   Updated: 2024/01/12 18:01:09 by hrigrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*dest;

	dest = (char *) b;
	i = 0;
	while (i < len)
	{
		dest[i] = c;
		i++;
	}
	return (dest);
}
