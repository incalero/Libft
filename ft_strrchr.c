/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: incalero <incalero@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:41:11 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/05/03 10:37:06 by incalero         ###   ########.fr       */
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
			return ((char *) &s[i]);
		i--;
	}
	return (0);
}

/*int	main(void)
{
	const char	str[] = "Se cago en Missuri";
	int			c;

	c = '\0';// + 256;
	//c = 333;
	printf ("%i\n", c);
	printf("Funcion original =     %s\n", strrchr(str, c));
	printf("Funcion hecho propio = %s\n%p", ft_strrchr(str, c), ft_strrchr(str, c));
	return (0);
}*/
