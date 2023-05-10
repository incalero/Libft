/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:50:28 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/04/25 13:59:00 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (start >= ft_strlen(s) || ft_strlen(s) == 0 || len == 0)
	{
		substr = (char *) malloc (sizeof(char) * 1);
		if (substr == NULL)
			return (NULL);
		substr[i] = '\0';
		return (substr);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = (char *) malloc (sizeof(char) * len + 1);
	if (substr == NULL)
		return (NULL);
	while (i < len && s[start] != '\0')
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}

/*int	main(void)
{
	char			*s = "01234";
	unsigned int	start;
 	size_t			len;

	start = 0;
	len = 10;
	printf("Subcadena: %s\n", ft_substr("hola", 4294967295, INT64_MAX));
	return (0);
}*/
