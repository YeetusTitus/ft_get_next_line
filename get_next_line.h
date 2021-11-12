/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:25:20 by jforner           #+#    #+#             */
/*   Updated: 2021/11/08 18:10:20 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*ft_strjoin(char *s1, char *s2);
int		ft_chrcmp(char *str, char c);
size_t	ft_strlenn(char *str, int t);
int		ft_buftoline(char *buf, int fd, char **line);
char	*get_next_line(int fd);

void	*ft_memset(void *str, char c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
char	*ft_fullstr(char *s, unsigned int start, size_t len, char *str);
char	*ft_substr(char *s, unsigned int start, size_t len);
int		ft_bufset(char *buf, int fd);

#endif