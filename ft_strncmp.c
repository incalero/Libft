/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:40:48 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/04/24 12:03:06 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	//const char	s1[] = "\0";
	//const char	s2[] = "\200";
	//const char	s1[] = "salut";
	//const char	s2[] = "salut";
	char *s1 = "\x12\xff\x65\x12\xbd\xde\xad";
	char *s2 = "\x12\x02";
	size_t		n;
	int			i;

	i = '\2';
	n = 5;
	printf ("%i\n", i);
	printf ("Funcion original: %i\n", strncmp(s1, s2, n));
	printf ("Funcion propio:   %i\n", ft_strncmp(s1, s2, n));
	return (0);
}*/
