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

const char	*ft_strrchr(const char *str, int character)

{
	int			i;
	const char	*s;

	i = 0;
	s = NULL;
	if (str != NULL)
	{
		while (str[i])
		{
			if (str[i] == (char)character)
				s = (const char *)(str + i);
			i++;
		}
		if (str[i] == character)
			s = (const char *)(str +i);
	}
	return (s);         
} 

/*int	main(void)
{
	const char	*str = "hola mundo";
	const char	*s;
	const char	*d;

	s = ft_strrchr(str, 'e');
	d = strrchr(str, 'e');

	printf("La última aparición de la letra 'o' en la cadena con la función ft_strrchr es: %s\n", ft_strrchr(str, 'e'));
	printf("La última aparición de la letra 'o' en la cadena con la función strrchr es: %s\n", strrchr(str, 'e'));
	printf("la posicion del ultimo caracter 'o' encontrado con ft_strrchar es %ld\n", (s +1) - str);
	printf("la posicion del ultimo caracter 'o' encontrado con strrchar es %ld\n", (d +1) - str);

	return (0);
}*/
