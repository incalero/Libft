/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: incalero <incalero@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 10:28:11 by incalero          #+#    #+#             */
/*   Updated: 2023/04/30 10:52:59 by incalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>
#include<unistd.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ss1;
	const unsigned char	*ss2;
	size_t				i;

	i = 0;
	ss1 = (const unsigned char *)s1;
	ss2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}

int main(void)
{
    size_t x = 3;
    size_t y = 9;
    
    const void *s1 = "hola mundo";
    const void *s2 = "hola ztuendo";

    const void *s3 = "hola mundo";
    const void *s4 = "hola ";
    
    printf("el resultado de la funcion replica es %d\n" , ft_memcmp(s1, s2, x));
    printf("el resultado de la funcion original es %d\n" , memcmp(s1, s2, x));
    
    printf("el resultado de la funcion replica es %d\n" , ft_memcmp(s1, s2, y));
    printf("el resultado de la funcion original es %d\n" , memcmp(s1, s2, y));

    printf("el resultado de la funcion replica es %d\n" , ft_memcmp(s3, s4, x));
    printf("el resultado de la funcion original es %d\n" , memcmp(s3, s4, x));
    
    printf("el resultado de la funcion replica es %d\n" , ft_memcmp(s3, s4, y));
    printf("el resultado de la funcion original es %d\n" , memcmp(s3, s4, y));

}