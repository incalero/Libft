/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: incalero <incalero@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:28:54 by incalero          #+#    #+#             */
/*   Updated: 2023/05/22 14:28:54 by incalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;

	if (!s)
		return (0);
	res = malloc ((ft_strlen(s) + 1) * (sizeof(char)));
	if (!res)
		return (0);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = 0;
	return (res);
}

/*int main(void)

char	converttouppercase (unsigned int index, char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

{
    const   char           *s;
    char                   *c;

    s = "¡Hola mundo!";
    c = ft_strmapi(s, convertToUppercase);
    printf ("el resultado de aplicar la funcion es: %s\n", c);
    return (0);
}*/