/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adekan <adekan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:40:04 by adekan            #+#    #+#             */
/*   Updated: 2023/05/01 15:56:10 by adekan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*str1 = "hellO";
	char	*str2 = "HELLO";
	char	*str3 = "123";
	char	*str4 = "";
	char	*str5 = NULL;

	printf("String: %s, Result: %d\n", str1, ft_str_is_uppercase(str1));
	printf("String: %s, Result: %d\n", str2, ft_str_is_uppercase(str2));
	printf("String: %s, Result: %d\n", str3, ft_str_is_uppercase(str3));
	printf("String: %s, Result: %d\n", str4, ft_str_is_uppercase(str4));
	printf("String: %s, Result: %d\n", str5, ft_str_is_uppercase(str5));

	return (0);
} */
