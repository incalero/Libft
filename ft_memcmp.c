/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:37:04 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/04/25 18:50:49 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1b;
	unsigned char	*s2b;
	size_t			i;

	s1b = (unsigned char *) s1;
	s2b = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (s1b[i] != s2b[i])
			return (s1b[i] - s2b[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	const char	s1[] = "abcdef";
	const char	s2[] = "abc\375xx";
	size_t		n;

	n = 7;
	printf ("Funcion original: %i\n", memcmp(s1, s2, n));
	printf ("Funcion propio:   %i\n", ft_memcmp(s1, s2, n));
	return (0);
}*/
