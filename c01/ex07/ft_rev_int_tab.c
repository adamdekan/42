/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adekan <adekan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:17:12 by adekan            #+#    #+#             */
/*   Updated: 2023/04/27 15:10:02 by adekan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		i++;
		j--;
	}
}
/*
int	main(void)
{
	int		size = 20;
	int		i;
	int		arr[size];

	i = 0;
	printf("Original array: ");
	while (i < size)
	{
		arr[i] = i + 1;
		printf("%d ", arr[i]);
		i++;
	}
	ft_rev_int_tab(arr, size);
	printf("\nReversed array: ");
	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return (0);
}
 */
