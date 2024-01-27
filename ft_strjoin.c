/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrigrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:21:10 by hrigrigo          #+#    #+#             */
/*   Updated: 2024/01/25 17:33:34 by hrigrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_size;
	size_t	s2_size;
	char	*s3;
	int		i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	s3 = (char *)malloc(sizeof(char) * (s1_size + s2_size + 1));
	if (!s3)
		return (NULL);
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[i - s1_size])
	{
		s3[i] = s2[i - s1_size];
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
