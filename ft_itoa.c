/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elharuty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 19:08:17 by elharuty          #+#    #+#             */
/*   Updated: 2023/02/02 20:41:17 by elharuty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*f(char **s, int i, long int nb)
{
	(*s)[i] = '\0';
	while (nb && i-- > -1)
	{
		(*s)[i] = (nb % 10) + 48;
		nb /= 10;
	}
	return (*s);
}

char	*ft_itoa(int n)
{
	int		i;
	long	nb;
	char	*s;

	if (n == 0)
		return (ft_strdup("0"));
	nb = n;
	i = 1;
	while ((n > 9 || n < -9) && ++i)
		n /= 10;
	if (nb < 0)
	{
		s = malloc(i++ + 2);
		if (s == NULL)
			return (NULL);
		s[0] = '-';
		nb = -nb;
	}
	else
	{
		s = malloc(i + 1);
		if (s == NULL)
			return (NULL);
	}
	return (f(&s, i, nb));
}
