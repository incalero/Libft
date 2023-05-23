/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: incalero <incalero@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:45:42 by incalero          #+#    #+#             */
/*   Updated: 2023/05/22 14:45:42 by incalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*char convertToUppercase(unsigned int index, char c)
{
	if (c >= 'a' && c <= 'z') 
		return c - 32;  // Convertir carácter a mayúscula
	else 
		return (c);  // Mantener carácter sin cambios
}

int main(void)
{
    char           s[100] = "¡Hola mundo!";;
    char           *c;

    c = ft_striteri(s, convertToUppercase);
    printf ("el resultado de aplicar la funcion es: %s\n", c);
    return (0);
}*/