/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: incalero <incalero@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 08:15:40 by incalero          #+#    #+#             */
/*   Updated: 2023/05/25 09:05:02 by incalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<ctype.h>
#include"libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*int main()
{
	char c = '1';
	
	printf ("%s", "\n el resultado es:\n");
	printf ("%d",  ft_isdigit(c));
	printf ("%s", "\n el resultado original es:\n");
	printf ("%d",  isdigit(c));
}*/
