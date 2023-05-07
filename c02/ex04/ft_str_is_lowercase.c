/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adekan <adekan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 15:42:59 by adekan            #+#    #+#             */
/*   Updated: 2023/05/01 15:56:02 by adekan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str1 = "hello";
	char	*str2 = "HeLLo";
	char	*str3 = "123";
	char	*str4 = "";
	char	*str5 = NULL;

	printf("String: %s, Result: %d\n", str1, ft_str_is_lowercase(str1));
	printf("String: %s, Result: %d\n", str2, ft_str_is_lowercase(str2));
	printf("String: %s, Result: %d\n", str3, ft_str_is_lowercase(str3));
	printf("String: %s, Result: %d\n", str4, ft_str_is_lowercase(str4));
	printf("String: %s, Result: %d\n", str5, ft_str_is_lowercase(str5));

	return (0);
} */
