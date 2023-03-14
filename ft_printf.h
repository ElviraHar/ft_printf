/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elharuty <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:32:55 by elharuty          #+#    #+#             */
/*   Updated: 2023/02/27 18:32:56 by elharuty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_strdup(const char *s1);
char	*ft_itoa(int n);
char	*unsigned_itoa(unsigned int n);
int		unsigned_printnum(unsigned int nb);
int		printchar(char c);
int		printstr(char *str);
int		printnum(int nb);
int		hex_upper(unsigned int n);
int		hex(unsigned int n);
int		pointer(unsigned long long point);
int		check(char c, va_list a);
int		ft_printf(const char *str, ...);

#endif
