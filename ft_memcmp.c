/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrigrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:22:09 by hrigrigo          #+#    #+#             */
/*   Updated: 2024/01/25 16:41:41 by hrigrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s11;
	unsigned char	*s21;

	s11 = (unsigned char *) s1;
	s21 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (s11[i] > s21[i] || s11[i] < s21[i])
			return (s11[i] - s21[i]);
		i++;
	}
	return (0);
}
