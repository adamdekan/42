/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adekan <adekan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:03:59 by adekan            #+#    #+#             */
/*   Updated: 2023/04/29 18:06:45 by adekan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_convert(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

int	ft_char_for_cap(char *c)
{
	if ((*c < '0' || *c > '9') && (*c > 'z' || *c < 'a')
		&& (*c > 'Z' || *c < 'A') && !(c == NULL))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_for_cap(&str[i - 1]) == 1)
			ft_convert(&str[i]);
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("Original string: %s\n", str);
	ft_strcapitalize(str);
	printf("Lowercase string: %s\n", str);

	return (0);
}
 */
