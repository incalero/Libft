#include "libft.h"

size_t	ft_strlen(const	char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < dstsize - 1)
	{
	dst [i] = src [i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
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
		ok = 0;
		j = 0;
		while ( set[j] != '\0')
			if (set[j++] == s1[i])
				ok = 1;
		i++;
	}
	return (i - 1);
}

static int	ft_finde(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	ok;

	if (ft_strlen(set) > ft_strlen(s1))
		return (-1);
	j = 0;
	i = strlen(s1) - 1;
	ok = 1;
	while (s1[i] != '\0' && ok == 1)
	{
		ok = 0;
		while ( set[j] != '\0')
			if (set[j++] == s1[i])
				ok = 1;
		i--;
		printf("%d %d\n", i, j);
	}
	return (i + 1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*result;
	//const char	*set;

	//start = ft_findi(s, set);
	//len = ft_findi(s, set) - ft_finde(s, set);
    	
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
	{
		result = malloc(sizeof(char) * 1);
		if (!result)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	result = malloc(sizeof(char) * (len +1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s + start, len +1);
	return (result);
}

char	*ft_strtrim(char const *s1, char const *set)
{

}




int	main(void)
{
	const char	s1[] = "abac abc";
	const char	set[] = "acb";
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
	
	
	printf ("el resultado 2 de findi es:%d\n", ft_findi(s2, set2));
	printf ("el resultado de finde es:%d\n", ft_finde(s2, set2));
	printf (" el string resultante es :%s\n\n\n", ft_substr(s2, z, k));
}