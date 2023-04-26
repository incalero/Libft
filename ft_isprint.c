/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: incalero <incalero@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 08:15:43 by incalero          #+#    #+#             */
/*   Updated: 2023/04/25 08:15:43 by incalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int ft_isprint (int c)

{
    if (c >= 32 && c < 127)
        return (1);
    return(0);
}

/* int main(void)
{
    char    x;

    x = 'a';
    printf("%d\n", ft_isprint(x));
    printf("%d\n", isprint(x));
}
*/
