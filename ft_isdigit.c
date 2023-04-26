/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: incalero <incalero@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 08:15:40 by incalero          #+#    #+#             */
/*   Updated: 2023/04/25 08:22:26 by incalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1024);
}

/* int main()
{
	char c = 'd';
	
	printf ("%s", "\n el resultado es:\n");
	printf ("%d",  ft_isdigit(c));
	printf ("%s", "\n el resultado original es:\n");
        printf ("%d",  isdigit(c));
}*/
