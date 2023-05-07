/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adekan <adekan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 13:37:08 by adekan            #+#    #+#             */
/*   Updated: 2023/05/01 15:55:50 by adekan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 'z' || str[i] < 'a') && (str[i] > 'Z' || str[i] < 'A'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char *str1 = "AbcDefGhi";
	char *str2 = "AbcDef123";
	char *str3 = "AbcDef-";
	char *str4 = "";

	printf("%s: %d\n", str1, ft_str_is_alpha(str1));
	printf("%s: %d\n", str2, ft_str_is_alpha(str2));
	printf("%s: %d\n", str3, ft_str_is_alpha(str3));
	printf("%s: %d\n", str4, ft_str_is_alpha(str4));
	return (0);
} */
