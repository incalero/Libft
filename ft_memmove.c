/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:37:53 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/04/25 20:15:35 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;

	if (!src && !dst)
		return (0);
	i = 0;
	if (dst < src)
	{
		while (i < len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
		return (dst);
	}
	while (len--)
		((char *)dst)[len] = ((char *)src)[len];
	return (dst);
}

int	main(void)
{
	char	str[] = "Mamma mia";
	char	*src;

	//str = "H";
	src = (char *) malloc (sizeof(char) * (ft_strlen(str) + 1));
	memcpy(src, str, 47);
	//OJO LA SIGUIENTE LINEA ESTA PARTIDA
	printf("src despues de ft_memmove:\n%s\n", ft_memmove((void *)src + -10, src, 3));
	//printf("src despues de memmove:\n%s\n", memmove((void *)src - 10, src, 3));

	return (0);
}
