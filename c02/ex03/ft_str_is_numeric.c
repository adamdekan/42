/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adekan <adekan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 15:42:59 by adekan            #+#    #+#             */
/*   Updated: 2023/05/01 15:55:55 by adekan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str [i] <= 57))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char str1[] = "1234567890";
	char str2[] = "1234567890abc";
	char str3[] = "abc1234567890";
	char str4[] = "";

	if (ft_str_is_numeric(str1))
		printf("str1 is numeric.\n");
	else
		printf("str1 is not numeric.\n");

	if (ft_str_is_numeric(str2))
		printf("str2 is numeric.\n");
	else
		printf("str2 is not numeric.\n");

	if (ft_str_is_numeric(str3))
		printf("str3 is numeric.\n");
	else
		printf("str3 is not numeric.\n");

	if (ft_str_is_numeric(str4))
		printf("Empty string is numeric.\n");
	else
		printf("Empty string is not numeric.\n");

	return (0);
}
*/
