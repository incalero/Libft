/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:38:31 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/04/21 14:00:17 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	size_t			i;

	p = b;
	i = 0;
	while (i < len)
	{
		*p++ = c;
		i++;
	}
	return (b);
}

/*int	main(void)
{
	char	str[] = "Aaay Macarena, como me pica!";

	printf("Antes de memset:      %s\n", str);
	ft_memset(str, 'W', strlen(str));
	printf("Despues de ft_memset: %s\n", str);
	memset(str, '!', strlen(str));
	printf("Despues de memset:    %s\n", str);
	return (0);
}*/
