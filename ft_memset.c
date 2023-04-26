/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: incalero <incalero@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 11:23:41 by incalero          #+#    #+#             */
/*   Updated: 2023/04/25 08:24:41 by incalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *ptr, int value, size_t len)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = ptr;
	while (i < len)
	{
		s[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}
