/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: incalero <incalero@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 10:19:04 by incalero          #+#    #+#             */
/*   Updated: 2023/05/11 11:50:14 by incalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const	char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	ft_findi(char const *s1, char const *set)
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

static int	ft_finde(char const *s1, char const *set)
{
	int		i;
	size_t	j;
	int		ok;

	i = ft_strlen(s1);
	ok = 1;
	i--;
	while (s1[i] != '\0' && ok == 1)
	{
		j = ft_strlen(s1);
		ok = 0;
		while (set[j] != '\0')
		{
			if (set[j--] == s1[i])
			ok = 1;
		}
		i--;
	}
	return (i + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	res;
	int		i;
	int		j;

	if (!s1)
		return (NULL);
}

int	main(void)
{
	char	s1[] = "abc d ba";
	char	set[] = "acb";
	char	s2[] = "1212 121212 12";
	char	set2[] = "12";

	printf ("el resultado de findi es:%d\n", ft_findi(s1, set));
	printf ("el resultado de finde es:%d\n", ft_finde(s1, set));
	printf ("el resultado de findi es:%d\n", ft_findi(s2, set2));
	printf ("el resultado de finde es:%d\n", ft_finde(s2, set2));
	return (0);
}

