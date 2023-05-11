/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: incalero <incalero@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 09:00:17 by incalero          #+#    #+#             */
/*   Updated: 2023/05/04 09:00:17 by incalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j] && i + j < len \
			&& haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0' )
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}

/* int 	main(void)
{
	const char	x[20] = "pepito moreno";
	const char	*y = NULL;
	
	size_t 		z;
	z = 30;
	printf ("el resultado de la funcion ft es: %s\n", strnstr (x, y, z));
	printf ("el resultado de la funcion ft es: %s\n", ft_strnstr(x, y, z));
	
}*/