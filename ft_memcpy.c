/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: incalero <incalero@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 08:15:46 by incalero          #+#    #+#             */
/*   Updated: 2023/04/25 08:15:46 by incalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == NULL || src == NULL)
		return (NULL);
	i	= 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/* int main() 
{
    char str[] = "Hola Mundo!";
    size_t x = 7;
    char pepe[20];

    ft_memcpy(pepe, str, x);
    pepe[x] = '\0';// añade el nulo al final de la cadena destino

    printf("%s", pepe);
    return 0;
    
    
}*/