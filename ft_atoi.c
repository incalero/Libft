/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: incalero <incalero@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 08:15:58 by incalero          #+#    #+#             */
/*   Updated: 2023/04/25 08:15:58 by incalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/*
** #include <stdlib.h>
** convert a string to an integer
**
** The atoi() function converts the initial portion of the string 
** pointed to by nptr to int.
*/

int		ft_atoi(const char *str)
{
	int	i;
	int	is_neg;
	int	res;

	i = 0;
	is_neg = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			is_neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * is_neg);
}

int main(void)
{
    const char  *s;

    s = "  \n -12987";
    printf ("el valor en entero que devuelve ft_atoi es %d\n", ft_atoi(s));
    printf ("el valor en entero que devuelve atoi es %d\n", atoi(s));
}