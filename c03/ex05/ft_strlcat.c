/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adekan <adekan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 10:12:27 by adekan            #+#    #+#             */
/*   Updated: 2023/05/03 12:51:02 by adekan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				len;

	len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dest[len + i] = src[i];
		i++;
	}
	return (len + ft_strlen(src));
}
/*
int	main(void)
{
	char str1[20] = "Hello";
	char str2[] = " World!";

	ft_strlcat(str1, str2, 3);

	printf("Concatenated string: %s\n", str1);

	return 0;
} */
