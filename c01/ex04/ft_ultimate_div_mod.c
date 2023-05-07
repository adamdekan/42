/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adekan <adekan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:01:51 by adekan            #+#    #+#             */
/*   Updated: 2023/04/27 12:58:17 by adekan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		div;
	int		mod;

	if (*b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
	else
	{
		*a = 0;
		*b = 0;
	}
}
/*
int	main(void)
{
	int		a;
	int		b;

	printf("Enter 2 numbers: ");
	scanf("%d %d", &a, &b);
	ft_ultimate_div_mod(&a, &b);
	printf("Div is %d and mod is %d. Bye", a, b);
	return (0);
}
 */
