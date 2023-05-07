/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adekan <adam.dekan@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 21:57:56 by adekan            #+#    #+#             */
/*   Updated: 2023/05/04 17:11:54 by adekan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char *str1 = "hello";
	char *str2 = "world";
	char *str3 = "hello";
	char *str4 = "hi";

	int result1 = ft_strcmp(str1, str2);
	int result2 = ft_strcmp(str1, str3);
	int result3 = ft_strcmp(str2, str4);

	printf("Result 1: %d\n", result1);
	printf("Result 2: %d\n", result2);
	printf("Result 3: %d\n", result3);

	return (0);
} */
