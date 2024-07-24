/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akizilto <akizilto@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:04:36 by akizilto          #+#    #+#             */
/*   Updated: 2023/11/14 17:19:36 by akizilto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_number_size(int number)
{
	unsigned int	length;

	length = 0;
	if (number == 0)
		return (1);
	if (number < 0)
	{
		length += 1;
		number *= -1;
	}
	while (number != 0)
	{
		number /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	len;
	long long		number;

	number = n;
	len = ft_number_size(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (number < 0)
	{
		str[0] = '-';
		number *= -1;
	}
	if (number == 0)
		str[0] = '0';
	str[len] = '\0';
	len --;
	while (number != 0)
	{
		str[len] = (number % 10) + '0';
		number = number / 10;
		len--;
	}
	return (str);
}
