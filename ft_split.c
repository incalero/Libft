/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 20:02:59 by manue             #+#    #+#             */
/*   Updated: 2023/04/25 18:23:54 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_subsplit(char const *s, char c, int i)
{
	int		len;
	char	*str;
	int		start;

	start = i;
	len = 1;
	while (s[i] != c && s[i] != '\0')
	{
		len++;
		i++;
	}
	i = 0;
	str = (char *) malloc (sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	while (s[start] != c && s[start] != '\0')
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

static int	ft_strcount(const char *s, char c)
{
	int	i;
	int	snbr;
	int	ok;

	i = 0;
	snbr = 0;
	ok = 1;
	while (s[i] != '\0')
	{
		if (s[i] != c && ok == 1)
		{
			snbr++;
			ok = 0;
		}
		if (s[i] == c)
			ok = 1;
		i++;
	}
	return (snbr);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	char	*str;
	int		snbr;
	int		i;
	int		j;

	snbr = (ft_strcount(s, c));
	array = (char **) malloc (sizeof(char *) * (snbr + 1));
	if (array == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			str = ft_subsplit(s, c, i);
			array[j++] = str;
			i = i + ft_strlen(str) - 1;
		}
		i++;
	}
	array[j] = 0;
	return (array);
}

/*int	main(void)
{
	//char	s[] = "-zapato-gato----julio-agosto-mosto";
	char	s[] = "Hleo!e";
	char	c;
	char	**res;
	int		i;

	i = 0;
	c = 'l';
	//res = (char **) malloc (sizeof(char *) * 100);
	res = ft_split(s, c);
	while (res[i])
	{
		printf ("%s\n", res[i]);
		i++;
	}
	return (0);
}*/
