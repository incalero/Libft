/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:54:41 by manue             #+#    #+#             */
/*   Updated: 2023/04/24 16:27:38 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	i2;
	size_t	i3;
	size_t	res;

	i = 0;
	i2 = 0;
	res = 0;
	while (src[res] != '\0')
		res++;
	while (dst[i] != '\0')
		i++;
	i3 = i;
	if (res + dstsize < res)
		return (res);
	while (src[i2] != '\0' && i < dstsize - 1 && dstsize > 0)
		dst[i++] = src[i2++];
	dst[i] = '\0';
	if (res + dstsize > res + i3)
		return (res + i3);
	return (res + dstsize);
}

/*int	main(void)
{
	char			src[] = "pajaro fluvial";
	char			dest[30] = "Eres un ";
	size_t	size;

	size = -1;
	//printf("%lu\n", size);
	//OJO LINEAS PARTIDAS
	//printf ("Funcion original\nsize = %lu\ndest =
	 %s\nres = %lu\n", size, dest, strlcat(dest, src, size));
	printf ("Mi funcion\nsize = %lu\ndest = %s\nres =
	 %lu\n", size, dest, ft_strlcat(dest, src, size));
	return (0);
}*/
