/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adekan <adam.dekan@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 21:05:08 by adekan            #+#    #+#             */
/*   Updated: 2023/05/05 09:26:48 by adekan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
/*
int	main(void)
{
	char	*haystack;
	char	*needle;
	char	*r;

	haystack = "hello world";
	needle = "world";
	r = ft_strstr(haystack, needle);
	if (r)
	{
		printf("'%s' found in '%s' at position %ld", needle, haystack, r
				- haystack);
	}
	else
	{
		printf("'%s' not found in '%s'\n", needle, haystack);
	}
	return (0);
}
 */
