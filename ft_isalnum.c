/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:09:36 by manue             #+#    #+#             */
/*   Updated: 2023/04/21 13:47:08 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <ctype.h>
#include <stdio.h>*/

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') \
	|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*int	main(void)
{
	int	c;

	c = '4';
	printf("Funcion original: %i\n", isalnum(c));
	printf("Funcion propia:   %i\n", ft_isalnum(c));
	return (0);
}*/
