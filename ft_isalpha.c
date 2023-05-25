/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: incalero <incalero@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 08:15:32 by incalero          #+#    #+#             */
/*   Updated: 2023/05/25 09:03:41 by incalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<ctype.h>
#include "libft.h" 

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*int main(void)
{
	char c = 'a';
	printf ("el resultado de la solucion es: %d\n" , ft_isalpha(c));
	printf ("el resultado de la solucion es: %d\n" , isalpha(c));
	
}*/
