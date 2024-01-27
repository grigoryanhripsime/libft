/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrigrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 20:50:47 by hrigrigo          #+#    #+#             */
/*   Updated: 2024/01/23 20:16:06 by hrigrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	s_len;
	char	*str;

	if (!s || !f)
		return (0);
	s_len = ft_strlen(s);
	str = (char *)malloc((s_len + 1) * sizeof(char));
	if (!str)
		return (0);
	str[s_len--] = '\0';
	while ((int)s_len >= 0)
	{
		str[s_len] = f(s_len, s[s_len]);
		s_len--;
	}
	return (str);
}
