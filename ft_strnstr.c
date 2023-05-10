/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:41:00 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/04/21 14:20:15 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		i2;
	char	*ret;

	if (needle[0] == '\0')
		return ((char *) haystack);
	if (len == 0)
		return (0);
	i = 0;
	while (haystack[i] != '\0' && i <= len)
	{
		i2 = 0;
		ret = (char *) &haystack[i];
		while (haystack[i++] == needle[i2] && needle[i2] != '\0' && \
		i <= len)
			i2++;
		if (needle[i2] == '\0')
			return (ret);
		i = i - i2;
	}
	return (0);
}

/*int	main(void)
{
	const char	haystack[] = "Eeeeeese cccccaballo de la Pradera";
	const char	neddle[] = "ca";
	size_t		len;

	len = 15;
	printf("Funcion original: %s\n", strnstr(haystack, neddle, len));
	printf("Funcion mio:      %s\n", ft_strnstr(haystack, neddle, len));
	return (0);
}*/
