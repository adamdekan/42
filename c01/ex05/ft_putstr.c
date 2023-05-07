/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adekan <adekan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:10:38 by adekan            #+#    #+#             */
/*   Updated: 2023/04/27 13:53:40 by adekan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int		len;

	len = 0;
	while (str[len] != '\0')
		len++;
	write(1, str, len);
}
/*
int	main(void)
{
	char	*text;

	text = "This string print is valid.";
	ft_putstr(text);
}
 */
