/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: incalero <incalero@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:58:32 by incalero          #+#    #+#             */
/*   Updated: 2023/05/02 11:58:32 by incalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/* int main(void)
{
    size_t x;
    size_t y;
    size_t z;
    const char *s1 = "hola";
    const char *s2 = "hola mundo intreminable";
    const char *s3 = "hola mundo internacional";
    const char *s4 = "hola ";
    const char *s5 = "";
    const char *s6 = "Un mundo sin fin";
    
    x = 3;
    y = 100;
    z = 0;
    
    printf("\n el resultado de la primera función x es: 
	%d\n", ft_strncmp(s1, s2, x));
    printf("el resultado de la segunda función x es: 
	%d\n", strncmp(s1, s2, x));
    printf("\n el resultado de la primera función y es: 
	%d\n", ft_strncmp(s1, s2, y));
    printf("el resultado de la segunda función y es: 
	%d\n", strncmp(s1, s2, y));
    printf("\n el resultado de la primera función z es: 
	%d\n", ft_strncmp(s1, s2, z));
    printf("el resultado de la segunda función z es: 
	%d\n", strncmp(s1, s2, z));
}*/