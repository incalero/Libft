/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:39:39 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/04/24 17:10:11 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*cpy;

	i = 0;
	while (s1[i] != '\0')
		i++;
	cpy = (char *) malloc (sizeof(char) * i + 1);
	if (cpy == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

/*int	main(void)
{
	const char	s1[] = "Paice ke ha refrescau...";
	char		*sc1;
	char		*sc2;

	sc1 = strdup(s1);
	sc2 = ft_strdup(s1);
	printf("Original function: %s\n", sc1);
	printf("Propiotz function: %s\n", sc2);
	//s1 = "Paice ke calienta";
	return (0);
}*/
