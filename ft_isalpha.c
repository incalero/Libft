/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: incalero <incalero@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 08:15:32 by incalero          #+#    #+#             */
/*   Updated: 2023/05/02 11:08:29 by incalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_isalpha(int c)
{
	if ((c < 'A') || (c > 'Z' && c < 'a') || (c > 'z'))
		return (0);
	return (c);
}

/* int main(void)
{
	char c = '';
	printf ("%s", "el resultado de la solucion es:");
	printf ("%d", ft_isalpha(c));
	printf ("%s", "el resultado de la solucion 2 es:");
	printf ("%d", isalpha(c));
}*/
