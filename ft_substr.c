/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrigrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:51:59 by hrigrigo          #+#    #+#             */
/*   Updated: 2024/01/18 19:19:01 by hrigrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	size_t			size;
	size_t			s_size;

	if (!s)
		return (NULL);
	s_size = ft_strlen(s);
	if (start >= s_size)
		size = 0;
	else if (start + len >= s_size)
		size = s_size - start;
	else
		size = len;
	i = 0;
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	while (i < size && s[start + i])
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}
