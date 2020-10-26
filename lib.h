/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddraco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 13:12:42 by ddraco            #+#    #+#             */
/*   Updated: 2020/10/26 22:45:26 by ddraco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H
# include <stdlib.h>

size_t		ft_strlen(char *str);
char		*ft_strcpy(char *dst, const char *src);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_write(int fd, void *str, int bytes);
int			ft_read(int fd, void *str, int bytes);
char		*ft_strdup(char *str);
#endif