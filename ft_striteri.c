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

char    *ft_striteri(char *s, char (*f)(unsigned int, char))
{
    unsigned int     i;

    if (!s)
        return (0);
	if (!s)
		return (0);
    i = 0;
    while (s[i])
    {
        s[i] = f(i, s[i]);
        i++;
    }
    s[i] = 0;
    return (s);
}

int main(void)
{
    char           s[100] = "¡Hola mundo!";;
    char           *c;

    c = ft_striteri(s, convertToUppercase);
    printf ("el resultado de aplicar la funcion es: %s\n", c);
    return (0);
}