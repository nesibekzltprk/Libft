/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akizilto <akizilto@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:15:33 by akizilto          #+#    #+#             */
/*   Updated: 2023/11/14 17:20:41 by akizilto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	int	x;

	x = 0;
	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set,*s1))
		s1++;
	x = ft_strlen(s1);
	while (x && ft_strchr(set, s1[x - 1]))
		x--;
	return (ft_substr(s1, 0, x));
}
