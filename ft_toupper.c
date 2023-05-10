/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:41:31 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/04/21 19:09:11 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <ctype.h>
#include "libft.h"*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

/*int	main(void)
{
	int		c;

	c = 'p';
	printf("Funcion original:     %c\n", toupper(c));
	printf("Funcion propio vasco: %c\n", ft_toupper(c));
	return (0);
}*/
