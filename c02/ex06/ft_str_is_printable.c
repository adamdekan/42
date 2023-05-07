/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adekan <adekan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:40:04 by adekan            #+#    #+#             */
/*   Updated: 2023/05/01 15:56:15 by adekan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str [i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
    char str1[] = "Hello, World!";  // printable
    char str2[] = "abc123\t";         // not printable
    char str3[] = "This is a test\n";  // not printable
    char str4[] = "";              // printable

    printf("str1 is printable: %d\n", ft_str_is_printable(str1));
    printf("str2 is printable: %d\n", ft_str_is_printable(str2));
    printf("str3 is printable: %d\n", ft_str_is_printable(str3));
    printf("str4 is printable: %d\n", ft_str_is_printable(str4));

    return 0;
} */
