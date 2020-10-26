/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddraco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 13:12:11 by ddraco            #+#    #+#             */
/*   Updated: 2020/10/26 23:05:17 by ddraco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>
#include <fcntl.h>

int		main(void)
{
	char s[] = "sasdsdasdasdasd";
	char *s1 = "";
	char *s2 = "hsja";
	char *s3 = "Hello world";
	char list[] = "111111111111";
	char *check_str_dup;
	printf("\n--------------STRLEN CHECK---------------\n");
	printf("LIBC - %lu\nMY - %lu\n", strlen(s), ft_strlen(s));
	printf("LIBC - %lu\nMY - %lu\n", strlen(s1), ft_strlen(s1));
	printf("LIBC - %lu\nMY - %lu\n", strlen(s2), ft_strlen(s2));


	printf("\n--------------STRCPY CHECK---------------\n");
	printf("LIBC - %s\nMY - %s\n", strcpy(s,"Abra"), ft_strcpy(s,"Abra"));

	printf("\n--------------STRCMP CHECK---------------\n");

	printf("LIBC - %d\nMY -  %d\n",strcmp(s2, s3),ft_strcmp(s2, s3));


	printf("\n--------------FT_WRITE CHECK---------------\n");
	
	int fd = -1;

	ft_write(fd, "Hi", 2);
	printf("Errno result - %d\n", errno);

	ft_write(1, "That should work", ft_strlen("That should work"));

	printf("\n--------------FT_READ CHECK---------------\n");

	fd = open("test.txt", O_RDONLY);
	printf("\nAMOUNT OF READ BYTES - %d\n", ft_read(fd, list, 12));
	printf("RESULT - %s", list);

	printf("\nEnter 5 symbols to check ft_read from STDIN\n");
	ft_read(0,list, 5);
	printf("RESULT - %s\n", list);

	printf("\n--------------STRDUP CHECK---------------\n");

	check_str_dup = ft_strdup(s2);
	ft_write(1, check_str_dup, ft_strlen(check_str_dup));
	ft_write(1, "\n", 1);
	return (0);
}