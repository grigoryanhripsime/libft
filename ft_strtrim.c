/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrigrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:31:07 by hrigrigo          #+#    #+#             */
/*   Updated: 2024/01/25 17:16:19 by hrigrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(int c, char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;
	int		i;

	if (!s1 || !set)
		return (0);
	start = 0;
	while (s1[start] && check(s1[start], (char *) set))
		start++;
	end = ft_strlen(s1) - 1;
	while (check(s1[end], (char *) set) && end >= start)
		end--;
	str = (char *)malloc(end - start + 2);
	if (!str)
		return (0);
	i = 0;
	while (start + i <= end)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
