/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:50:39 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/04/21 14:16:56 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

/*void	ft_upper_pair(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z' && i % 2 == 0)
		*c = *c - 32;
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f (i, &s[i]);
		i++;
	}
}

/*int	main(void)
{
	char	s[] = "sacando patatas alau del rio salieron carramarros con alpargatas";

	ft_striteri(s, &ft_upper_pair);
	printf("\n%s\n\n", s);
	return (0);
}*/
