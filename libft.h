/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:20:30 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/21 13:04:20 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int				ft_atoi(char *str);
void			ft_bzero(void *s, int n);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
void			*ft_calloc(int n, int size);
void			*ft_memchr(const void *str, int c, int b_size);
int				ft_memcmp(void *s1, void *s2, int n);
void			*ft_memcpy(void *dest, const void *src, int n);
void			*ft_memmove(void *dest, const void *src, int n);
void			*ft_memset(void *s, int c, int n);
char			*ft_strchr(char *str, int c);
char			*ft_strdup(const char *s);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_strlen(const char *s);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strnstr(const char *str, const char *to_find, int n);
char			*ft_strrchr(char *str, char c);

#endif