/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: incalero <incalero@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 08:15:50 by incalero          #+#    #+#             */
/*   Updated: 2023/04/25 08:15:50 by incalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)

{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (dst);
	if (src < dst)
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
	}
	else
	{
		while (len > 0)
		{
			len--;
			*d++ = *s++;
		}
	}
	return (dst);
}

/* int main() 
{
    char str[] = "Hola Mundo!";
    size_t x = 7;
    char pepe[20];

    ft_memmove(pepe, str, x);
    pepe[x] = '\0';// añade el nulo al final de la cadena destino

    printf("%s", pepe);
    return 0;
    
    
}*/
