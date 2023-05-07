/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adekan <adekan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:10:17 by adekan            #+#    #+#             */
/*   Updated: 2023/04/27 15:39:05 by adekan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int		size = 20;
	int		i;
	int		arr[size];

	srand(time(NULL));

	i = 0;
	printf("Original array: ");
	while (i < size)
	{
		arr[i] = rand() % 100;
		printf("%d ", arr[i]);
		i++;
	}
	ft_sort_int_tab(arr, size);
	printf("\nReversed array: ");
	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return (0);
} */
