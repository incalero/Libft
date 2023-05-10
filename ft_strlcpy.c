/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:40:24 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/04/21 14:18:21 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	if (dstsize == 0)
		return (i);
	while (src[j] != '\0' && j < dstsize - 1)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (i);
}

/*int	main(void)
{
	char			str[] = "Ojete calores son amores";
	char			dest[50];
	unsigned int	size;
	size_t			i;

	size = 13;
	//i = strlcpy(dest, str, size);
	i = ft_strlcpy(dest, str, size);
	printf("srlcpy i = %lu\n", i);
	printf("srlcpy dest = %s\n", dest);
	return (0);
}*/
