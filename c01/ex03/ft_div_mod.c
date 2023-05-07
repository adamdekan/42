/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adekan <adekan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:56:15 by adekan            #+#    #+#             */
/*   Updated: 2023/04/27 12:10:47 by adekan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
	else
	{
		*div = 0;
		*mod = 0;
	}
}
/*
int	main(void)
{
	int		x;
	int		y;
	int		div;
	int		mod;

	printf("Input 2 numbers: ");
	scanf("%d %d", &x, &y);
	ft_div_mod(x, y, &div, &mod);
	printf("%d divided by %d is %d with a remainder of %d\n", x, y, div, mod);
	return (0);
}
*/
