/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:41:23 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/04/21 14:23:45 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

/*int	main(void)
{
	int		c;

	c = 'W';
	printf("Funcion original:     %c\n", tolower(c));
	printf("Funcion propio vasco: %c\n", ft_tolower(c));
	return (0);
}*/
