/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: incalero <incalero@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 09:38:08 by incalero          #+#    #+#             */
/*   Updated: 2023/05/02 11:12:55 by incalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const	char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_length;
	size_t	src_length;

	src_length = ft_strlen(src);
	dest_length = ft_strlen(dst);
	j = dest_length;
	i = 0;
	if (dest_length < size - 1 && size > 0)
	{
		while (src[i] && dest_length + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (dest_length >= size)
		dest_length = size;
	return (dest_length + src_length);
}

/*int	main(void)
{
	char			src[] = "pajaro fluvialggjjfg";
	char			dest[30] = "Eres un ";
	size_t	size;

	size = 0;
	printf("%lu\n", size);
	
	// printf("\n La cadena resultante es: %lu\n", strlcat(dest, src, size));
	printf("\n La cadena resultante es: %zu\n", ft_strlcat(dest, src, size));
	printf("dst = %s\n", dest);
	// printf("\n Mi función:\nsize = %zu\ndest = %s\nres = %lu\n", size, dest, 
	ft_strlcat(dest, src, size));		
	return (0);
}*/