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

static int	ft_findc(char const *s1, char c)
{
    int	i;
    int ok;
     
	i = 0;
	ok = 0;
	while (*s1)
	{
        if (*s1 != c && ok == 0)
        {
            ok = 1;
            i++;
        }
        else if (*s1 == c )
            ok = 0;
        s1++;
    }
     return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*result;
    	
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


char    **ft_split(char const *s, char c)
{
    size_t	i;
	size_t	j;
	int		inicio;
	char	**s2;

    s2 = malloc((ft_findc(s, c) + 1) * sizeof(char *));
    if (!s)
		return (0);
    i = 0;
    j = 0;
    inicio = -1;
    while (i <= ft_strlen(s))
    {
        if (s[i] != c && inicio < 0)
        {
			inicio = i;
            printf("11 %ld\n", i);
        }
		else if ((s[i] == c || i == ft_strlen(s)) && inicio >= 0)
		{
			s2[j++] = ft_substr(s, inicio, i - inicio);
			inicio = -1;
            printf("22 %ld\n", i);
		}
		i++;
    }
    s2[j] = '\0';
	return (s2);
}

int	main(void)
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

	/*i = 0;
	c = '-';
	//res = (char **) malloc (sizeof(char *) * 100);
	res = ft_split(NULL, c);
	while (res && res[i])
	{
		printf ("%s\n", res[i]);
		i++;
	}*/
	return (0);
}