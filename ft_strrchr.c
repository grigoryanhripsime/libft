/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrigrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:12:37 by hrigrigo          #+#    #+#             */
/*   Updated: 2024/01/25 16:24:26 by hrigrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	s_len;

	s_len = (int) ft_strlen(s) - 1;
	if (c == '\0')
		return ((char *) s + s_len + 1);
	while (s_len >= 0)
	{
		if (s[s_len] == (char) c)
			return ((char *) s + s_len);
		s_len--;
	}
	return (0);
}
