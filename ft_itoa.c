/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 10:36:10 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/04/25 08:59:40 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_swap(char *str)
{
	int		fin;
	int		size;
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
		i++;
	fin = i - 1;
	size = fin;
	i = 0;
	while (i <= size / 2)
	{
		c = str[fin];
		str[fin--] = str[i];
		str[i++] = c;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		i;
	int		dig;
	int		sign;

	if (n < 0)
		sign = -1;
	num = (char *) malloc (sizeof(char) * 12);
	if (num == NULL)
		return (NULL);
	i = 0;
	if (n == 0)
		num[i++] = '0';
	while (n)
	{
		dig = n % 10;
		if (dig < 0)
			dig = -dig;
		n = n / 10;
		num[i++] = dig + '0';
	}
	if (sign == -1)
		num[i++] = '-';
	num[i] = '\0';
	return (ft_swap(num));
}

/*int	main(void)
{
	int	n;

	//n = -2147483648;
	n = 156;
	printf ("\nEr numero es: %s\n", ft_itoa(n));
	return (0);
}*/