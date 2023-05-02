/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: incalero <incalero@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 10:28:11 by incalero          #+#    #+#             */
/*   Updated: 2023/04/30 10:52:59 by incalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		i;

	str = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}

/*int main(void)
{
    
    size_t c;
    size_t d;
    char x;
    const char *s = "hhola mundo";

    x = 'o';
    c = 2;
    d = 10;

    printf("el resultado de la funcion replicada para c = 2 es: 
    %p\n" , ft_memchr(s, x, c));
    printf("el resultado de la funcion original para c = 2 es: 
    %p\n" , memchr(s, x, c));
    printf("el resultado de la funcion replicada para c = 10 es: 
    %p\n" , ft_memchr(s, x, d));
    printf("el resultado de la funcion original para c = 10 es: 
    %p\n" , memchr(s, x, d));
}*/