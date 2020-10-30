/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddraco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 13:12:11 by ddraco            #+#    #+#             */
/*   Updated: 2020/10/30 23:31:41 by ddraco           ###   ########.fr       */
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
	char s[] = "sasdhdjsakhdjkahsdjkshakdjhsakdjhsjdhklsahdklsajhdksahdkjssdasdasdasd";
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
	// printf("LIBC - %s\nMY - %s\n", strcpy(s,"Abra"), ft_strcpy(s,"Abra"));
	printf("MY - |%s|\n", ft_strcpy(s,"sgfhfghkgggkkyykhkghjgjfggjfhgfghfhgfjh"));
	printf("LIBC - |%s|\n", strcpy(s,"sgfhfghkgggkkyykhkghjgjfggjfhgfghfhgfjh"));
	printf("MY - |%s|\n", ft_strcpy(s,""));
	printf("LIBC - |%s|\n", strcpy(s,""));

	printf("\n--------------STRCMP CHECK---------------\n");

	printf("LIBC - %d\nMY -  %d\n",strcmp(s2, s3),ft_strcmp(s2, s3));
	printf("LIBC - %d\nMY -  %d\n",strcmp("", ""),ft_strcmp("", ""));
	printf("LIBC - %d\nMY -  %d\n",strcmp(s2, ""),ft_strcmp(s2, ""));
	printf("LIBC - %d\nMY -  %d\n",strcmp("", s3),ft_strcmp("", s3));


	printf("\n--------------FT_WRITE CHECK---------------\n");
	
	int fd;
	fd = open("test.txt", O_RDWR);


	printf("MY - %d\n",ft_write(1, "That should work", ft_strlen("That should work")));
	printf("LIBC - %zd\n",write(1, "That should work", ft_strlen("That should work")));

	printf("MY - %d\n",ft_write(fd, "111333344444", ft_strlen("111333344444")));
	printf("LIBC - %zd\n",write(fd, "111333344444", ft_strlen("111333344444")));

	printf("MY - %d\n",ft_write(-1, "111333344444", ft_strlen("111333344444")));
	printf("Errno result for my - %d\n", errno);
	printf("LIBC - %zd\n",write(-1, "111333344444", ft_strlen("111333344444")));
	printf("Errno result for LIBC - %d\n", errno);

	

	printf("\n--------------FT_READ CHECK---------------\n");

	fd = open("test.txt", O_RDONLY);
	printf("\nAMOUNT OF READ BYTES LIBC - %zd\n", read(fd, list, 12));
	printf("RESULT LIBC- %s", list);
	printf("\nAMOUNT OF READ BYTES MY - %d\n", ft_read(fd, list, 12));
	printf("RESULT MY- %s", list);

	printf("\nEnter 5 symbols to check ft_read from STDIN\n");
	ft_read(0,list, 5);
	printf("RESULT - %s\n", list);
	
	fd = -1;

	printf("\nAMOUNT OF READ BYTES LIBC - %zd\n", read(fd, list, 12));
	printf("Errno result for LIBC - %d\n", errno);
	printf("\nAMOUNT OF READ BYTES MY - %d\n", ft_read(fd, list, 12));
	printf("Errno result for my - %d\n", errno);

	printf("\n--------------STRDUP CHECK---------------\n");

	check_str_dup = ft_strdup(s2);
	printf("MY STRDUP - |%s|\n", check_str_dup);
	check_str_dup = strdup(s2);
	printf("LIBC STRDUP - |%s|\n", check_str_dup);

	check_str_dup = ft_strdup("");
	printf("MY STRDUP - |%s|\n", check_str_dup);
	check_str_dup = strdup("");
	printf("LIBC STRDUP - |%s|\n", check_str_dup);

	check_str_dup = ft_strdup("sjhajldhjshdkjahskdjhskjdhajkssadsdadsdhajkd");
	printf("MY STRDUP - |%s|\n", check_str_dup);
	check_str_dup = strdup("sjhajldhjshdkjahskdjhskjdhajkssadsdadsdhajkd");
	printf("LIBC STRDUP - |%s|\n", check_str_dup);
	return (0);
}