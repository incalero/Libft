/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: incalero <incalero@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:27:51 by incalero          #+#    #+#             */
/*   Updated: 2023/05/03 11:36:39 by incalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_strchr(const char *s, int c)
{
	while (c >= 256)
		c = c - 256;
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	if (*s == '\0' && c == '\0')
		return ((char *) s);
	return (NULL);
}*/

char	*ft_strchr(const char *s, int c)
{
	while (c >= 256)
		c = c - 256;
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	if (*s == c)
		return ((char *) s);
	return (NULL);
}

/*int	main(void)
{
	const char	str[] = "teste";
	int			c;

	c = 'e' + 1024;
	printf("Funcion original:     %s\n", strchr(str, c));
	printf("Funcion propio hecho: %s\n", ft_strchr(str, c));
	return (0);
}*/
