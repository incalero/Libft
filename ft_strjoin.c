/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:15:30 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/04/24 18:14:24 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		size;

	i = 0;
	size = 0;
	size = ft_strlen(s1) + ft_strlen(s2);
	res = (char *) malloc (sizeof(char) * size + 1);
	if (res == NULL)
		return (0);
	i = 0;
	size = 0;
	while (s1[i] != '\0')
		res[size++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		res[size++] = s2[i++];
	res[size] = '\0';
	return (res);
}

/*int	main(void)
{
	char	s1[] = "Ha llegado la mañana";
	char	s2[] = " y ha entrado por la ventana...";

	printf ("%s", ft_strjoin(s1, s2));
	return (0);
}*/
