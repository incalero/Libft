/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: incalero <incalero@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:06:07 by incalero          #+#    #+#             */
/*   Updated: 2023/05/22 16:06:07 by incalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_ini(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	ok;

	i = 0;
	ok = 1;
	while (s1[i] != '\0' && ok == 1)
	{
		j = 0;
		ok = 0;
		while (set[j] != '\0')
		{
			if (set[j++] == s1[i])
				ok = 1;
		}
		i++;
	}
	return (i - 1);
}

static int	ft_check_fin(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	ok;

	i = 0;
	ok = 1;
	while (s1[i] != '\0')
		i++;
	i--;
	while (i >= 0 && ok == 1)
	{
		j = 0;
		ok = 0;
		while (set[j] != '\0')
		{
			if (set[j++] == s1[i])
				ok = 1;
		}
		i--;
	}
	return (i + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		i2;
	int		j;

	i2 = 0;
	j = ft_check_fin(s1, set);
	i = ft_check_ini(s1, set);
	if (j - i < 0 || *s1 == '\0')
		return (ft_strdup(""));
	res = (char *) malloc (sizeof(char) * (j - i) + 2);
	if (res == NULL)
		return (NULL);
	while (i <= j)
		res[i2++] = s1[i++];
	res[i2] = '\0';
	return (res);
}

/*int	main(void)
{
	const char	s1[] = "            ";
	const char	set[] = "  ";
	const char	s2[] = "12122212A a34412412221";
	const char	set2[] = "12";
	unsigned int	x = ft_findi(s1, set);
	size_t	y = ft_finde(s1, set) - ft_findi(s1, set);
	unsigned int	z = ft_findi(s2, set2);
	size_t	k = ft_finde(s2, set2) - ft_findi(s2, set2);

	printf (" el strlen 1 resultante es :%ld\n %ld\n", strlen(s1), strlen(set));
	printf (" el strlen 1 resultante es :%ld\n %ld\n\n\n", strlen(s2), strlen(set2));


	printf ("el resultado 1 de findi es:%d\n", ft_findi(s1, set));
	printf ("el resultado de finde es:%d\n", ft_finde(s1, set));
	printf ("el resultado de finde y:%d\n", ft_finde(s1, set) - ft_findi(s1, set));
	printf ("el string resultante es :%s\n\n\n", ft_substr(s1, x, y));
	printf ("el string resultante de strtrim es :%s\n\n\n", ft_strtrim(s1, set));
	
	
	printf ("el resultado 2 de findi es:%d\n", ft_findi(s2, set2));
	printf ("el resultado de finde es:%s\n", ft_strtrim(s2, set2));
	printf (" el string resultante es :%s\n\n\n", ft_substr(s2, z, k));
	printf ("el string resultante de strtrim es :%s\n\n\n", ft_strtrim(s2, set2));
}*/

