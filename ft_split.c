/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: incalero <incalero@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 08:49:55 by incalero          #+#    #+#             */
/*   Updated: 2023/05/23 08:49:55 by incalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_del(char **array, int j)
{
	int	i;

	i = 0;
	while (i < j)
		free(array[i++]);
	free(array);
	return (NULL);
}

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

static int	ft_strlenint(const	char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		inicio;
	char	**s2;

	if (!s)
		return (NULL);
	s2 = (char **) malloc (sizeof(char *) * ((ft_findc(s, c)) + 1));
	if (s2 == NULL)
		return (NULL);
	i = -1;
	j = 0;
	inicio = -1;
	while (++i <= ft_strlenint(s))
	{
		if (s[i] != c && inicio < 0)
			inicio = i;
		else if ((s[i] == c || i == ft_strlenint(s)) && inicio >= 0)
		{
			s2[j++] = ft_substr(s, inicio, i - inicio);
			if (!s2)
				return (ft_del(s2, j));
			inicio = -1;
		}
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
    }
    printf("\n");


     //char	**res;
	//int		i;

	i = 0;
	c = '-';
	//res = (char **) malloc (sizeof(char *) * 100);
	res = ft_split(NULL, c);
	while (res && res[i])
	{
		printf ("%s\n", res[i]);
		i++;
	}
	return (0);
}*/