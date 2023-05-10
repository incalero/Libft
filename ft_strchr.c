/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:39:26 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/04/24 15:29:25 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	return (0);
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
