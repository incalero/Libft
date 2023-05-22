/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: incalero <incalero@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 08:15:03 by incalero          #+#    #+#             */
/*   Updated: 2023/05/22 08:15:03 by incalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static	int	ft_countdigit(int c)
{
	int	temp;
	int	numdigits;

	numdigits = 0;
	temp = c;
	if (temp < 0)
		temp = -temp;
	while (temp != 0)
	{
		temp /= 10;
		numdigits++;
	}
	return (numdigits);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*res;

	len = ft_countdigit (n);
	if (n <= 0)
		len++;
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	if (n == 0)
		res[0] = '0';
	else if (n < 0)
	{
		if (n == -2147483648)
			return (ft_strcpy(res, "-2147483648"));
		res[0] = '-';
		n = -n;
	}
	res[len] = '\0';
	while (n > 0)
	{
		res[--len] = (n % 10) + 48;
		n /= 10;
	}
	return (res);
}

/*int	main(void)
{
	int	c;
	int	d;
	int	z;

	c = -2147483648;
	d = -10;
	z = 0;
	printf ("el numero de digitos es %d\n", ft_countdigit(c));
	printf ("el numero de digitos es %d\n", ft_countdigit(d));
	printf ("el numero de digitos es %d\n", ft_countdigit(z));
	printf ("el string resultante de itoa es : %s\n\n", ft_itoa(c));
	printf ("el string resultante de itoa es : %s\n\n", ft_itoa(d));
	printf ("el string resultante de itoa es : %s\n\n", ft_itoa(z));
	return (0);
}*/
