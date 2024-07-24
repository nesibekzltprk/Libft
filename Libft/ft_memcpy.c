/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akizilto <akizilto@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:06:15 by akizilto          #+#    #+#             */
/*   Updated: 2023/11/14 17:19:44 by akizilto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, const void *src, size_t n)
{
	size_t	i;
	char	*dst;
	char	*s;

	s = (char *) src;
	dst = (char *) dest;
	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dst[i] = s[i];
		i++;
	}
	return (dest);
}
