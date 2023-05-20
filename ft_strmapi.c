#include "libft.h"

size_t	ft_strlen(const	char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char convertToUppercase(unsigned int index, char c) 
{
    if (c >= 'a' && c <= 'z') 
        return c - 32;  // Convertir carácter a mayúscula
    else 
        return c;  // Mantener carácter sin cambios
}

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char             *res;
    unsigned int     i;

    if (!s)
        return (0);
    res = malloc ((ft_strlen(s) + 1) * (sizeof(char)));
	if (!res)
		return (0);
    i = 0;
    while (s[i])
    {
        res[i] = f(i, s[i]);
        i++;
    }
    res[i] = 0;
    return (res);
}

int main(void)
{
    const   char           *s;
    char                   *c;

    s = "¡Hola mundo!";
    c = ft_strmapi(s, convertToUppercase);
    printf ("el resultado de aplicar la funcion es: %s\n", c);
    return (0);
}