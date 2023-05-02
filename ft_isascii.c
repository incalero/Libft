/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: incalero <incalero@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 08:15:37 by incalero          #+#    #+#             */
/*   Updated: 2023/04/25 08:15:37 by incalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)

{
	if (c >= '0' && c <= 127)
		return (c);
	return (0);
}

/* int main(void)
{
    char    x;

    x = 'a';
    printf("%d\n", ft_isascii(x));
    printf("%d\n", isascii(x));
}*/