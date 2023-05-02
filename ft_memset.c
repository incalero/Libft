/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: incalero <incalero@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 11:23:41 by incalero          #+#    #+#             */
/*   Updated: 2023/05/02 11:11:58 by incalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
