/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: incalero <incalero@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 08:05:07 by incalero          #+#    #+#             */
/*   Updated: 2023/05/18 08:05:07 by incalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_findc(char const *s1, char c)
{
	int	i;
	int	ok;

	i = 0;
	ok = 0;
	while (*s1)
	{
		if (*s1 != c && ok == 0)
		{
			ok = 1;
			i++;
		}
		else if (*s1 == c)
			ok = 0;
		s1++;
	}
	return (i);
}

static char	**ft_free(char **s2, int size)
{
	int	i;

	i = 0;
	while (i < size)
		free(s2[i++]);
	free(s2);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		inicio;
	char	**s2;

	s2 = malloc((ft_findc(s, c) + 1) * sizeof(char *));
	if (!s || !s2)
		return (NULL);
	i = 0;
	j = 0;
	inicio = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && inicio < 0)
			inicio = i;
		else if ((s[i] == c && c != 0) || i == ft_strlen(s))
		{
			s2[j++] = ft_substr(s , inicio, i - inicio);
			if (!s2[j -1])
				return (ft_free(s2, j -1));
			inicio = -1;
		}
		i++;
	}
	s2[j] = 0;
	return (s2);
}

/*int	main(void)
{
	char	s[] = "-zapato-gato--pedo--julio-agosto-mosto";
	char	s1[] = "Hle-o!e-";
	char	c = '-';

    printf ("el resultado de ft_findc(s) es: %d\n\n", ft_findc(s, c));
    printf ("el resultado de ft_findc(s1) es: %d\n\n", ft_findc(s1, c));
    char **result = ft_split(s, c);
    printf("el resultado de ft_split(s) es:\n");

    int i = 0;
    while (result[i] != NULL) {
    printf("%s\n", result[i]);
    i++;
    }
    printf("\n");
    char **result1 = ft_split(s1, c);
    printf("el resultado de ft_split(s1) es:\n");
    i = 0;
    while (result1[i] != NULL) {
    printf("%s\n", result1[i]);
    i++;
    printf("\n");
	return (0);
}

if (s2[i++] == 0)
			return (ft_free(s2));
			
*/