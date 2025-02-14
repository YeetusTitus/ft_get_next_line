/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:26:07 by jforner           #+#    #+#             */
/*   Updated: 2021/11/08 18:06:31 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	*ft_memset(void *str, char c, size_t n)
{
	unsigned int	i;
	unsigned char	*v;

	v = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		v[i] = c;
		i++;
	}
	return (v);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*vd;
	unsigned char	*vs;

	if (n == 0 || (dest <= 0 && src <= 0))
		return (dest);
	vd = (unsigned char *)dest;
	vs = (unsigned char *)src;
	i = 0;
	if (vd > vs)
	{
		while (n-- > 0)
			vd[n] = vs[n];
	}
	else
	{
		while (i < n)
		{
			vd[i] = vs[i];
			i++;
		}
	}
	return (dest);
}

char	*ft_fullstr(char *s, unsigned int start, size_t len, char *str)
{
	size_t			i;

	i = 0;
	while (i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = 0;
	free(s);
	return (str);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	l;

	l = (unsigned int)ft_strlenn(s, 0);
	if (start >= l)
	{
		free(s);
		str = malloc(1 * sizeof(char));
		if (!str)
			return (str);
		str[0] = '\0';
		return (str);
	}
	if ((l - start) < len)
		len -= len - (l - start);
	str = malloc(len * sizeof(char) + 1);
	if (!str)
		return (str);
	str = ft_fullstr(s, start, len, str);
	return (str);
}

int	ft_bufset(char *buf, int fd)
{
	int	error;

	ft_memset(buf, 0, BUFFER_SIZE + 1);
	error = read(fd, buf, BUFFER_SIZE);
	return (error);
}
