/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: incalero <incalero@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 10:28:11 by incalero          #+#    #+#             */
/*   Updated: 2023/04/21 10:52:59 by incalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)

{
	int	i;

	i = 0;
	while (c >= 256) 
		c = c - 256;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

/*int	main(void)
{
	const char	*str = "hola mundo";
	const char	*s;
	const char	*d;

	s = ft_strrchr(str, 'e');
	d = strrchr(str, 'e');
	printf("La última aparición de la letra 'o' en la cadena 
	con la función ft_strrchr es: %s\n", ft_strrchr(str, 'e'));
	printf("La última aparición de la letra 'o' en la cadena 
	con la función strrchr es: %s\n", strrchr(str, 'e'));
	printf("la posicion del ultimo caracter 'o' encontrado 
	con ft_strrchar es %ld\n", (s +1) - str);
	printf("la posicion del ultimo caracter 'o' encontrado 
	con strrchar es %ld\n", (d +1) - str);
	return (0);
}
*/