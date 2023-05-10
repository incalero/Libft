/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:02:27 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/04/24 19:21:34 by jgoikoet         ###   ########.fr       */
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
	char	s1[] = "abcdba";
	char	set[] = "acb";

	printf ("%s\n", ft_strtrim(s1, set));
	if (!strcmp( ft_strtrim(s1, set), ""))
 		printf("BIEN\n");
	else
 		printf("MAL\n");
	return (0);
}*/
