/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_itoa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elharuty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:34:45 by elharuty          #+#    #+#             */
/*   Updated: 2023/03/11 19:34:47 by elharuty         ###   ########.fr       */
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

char	*unsigned_itoa(unsigned int n)
{
	int		i;
	long	nb;
	char	*s;

	if (n == 0)
		return (ft_strdup("0"));
	nb = n;
	i = 1;
	while (n > 9 && ++i)
		n /= 10;
	if (nb >= 0)
	{
		s = malloc(i + 1);
		if (s == NULL)
			return (NULL);
	}
	return (f(&s, i, nb));
}

int	unsigned_printnum(unsigned int nb)
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = unsigned_itoa(nb);
	i = printstr(str);
	free(str);
	return (i);
}
