/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adekan <adekan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:53:17 by adekan            #+#    #+#             */
/*   Updated: 2023/04/27 11:55:26 by adekan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int		tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int	main(void)
{
	int		a;
	int		b;

	a = 42;
	b = 1;
	printf("A: %d |B: %d\n", a, b);
	ft_swap(&a, &b);
	printf("A: %d |B: %d", a, b);
	return (0);
}
*/
