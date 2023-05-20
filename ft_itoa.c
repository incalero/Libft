#include "libft.h"

int  ft_countdigit (int c)
{
    int  temp;
    int  numDigits;

    numDigits = 1;
    temp = c;
    if (temp < 0)
        {
            numDigits++;
            temp = -temp;
        }
    while (temp /= 10)
        numDigits++;
    return (numDigits);
}

char    *ft_itoa(int n)
{
    int         len;
    const char  *s;
    char        *res;

    s = "0123456789";
    len = ft_countdigit (n);
    res = (char *)malloc((len + 1) * sizeof(char));  // Asignar memoria para res
    if (!res)  // Verificar si la asignación de memoria fue exitosa
        return NULL;
    if (n == 0)
        res[0] = '0';
    if (n < 0)
        n = -n;
        res[0] = '-';
    while (n)
    {
        res[--len] = s[n % 10];
        n /= 10;
    }
    return (res);
}

int main(void)
{
    int c;

    c = 21474834;
    printf ("el numero de digitos es %d\n", ft_countdigit(c));
    printf ("el string resultante de itoa es : %s", ft_itoa(c));
    return (0);
}