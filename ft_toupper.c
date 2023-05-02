/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: incalero <incalero@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 10:49:28 by incalero          #+#    #+#             */
/*   Updated: 2023/05/02 11:17:44 by incalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c -32;
	return (c);
}

/*int main(void)
{
	int		c;

	c = 'j';
	printf("el caracter que cambiamos es: %c\n", c);
	printf("Funcion original:     %c\n", toupper(c));
	printf("Funcion creada: %c\n", ft_toupper(c));
	return (0);
}*/
