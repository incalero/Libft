/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: incalero <incalero@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:21:00 by incalero          #+#    #+#             */
/*   Updated: 2023/05/02 11:17:21 by incalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

/*int	main(void)
{
	int		c;

	c = 'J';
	printf("el caracter que cambiamos es: %c\n", c);
	printf("Funcion original:     %c\n", tolower(c));
	printf("Funcion creada: %c\n", ft_tolower(c));
	return (0);
}*/
