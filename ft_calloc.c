/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: incalero <incalero@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:46:25 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/05/10 08:51:50 by incalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*is;
	size_t	i;

	i = 0;
	is = malloc (count * size);
	if (is == NULL)
		return (0);
	ft_bzero(is, count * size);
	return (is);
}

/*int	main(void)
{
	size_t	count;
	size_t	i;
	int		*i1;
	int		*i2;

	count = 5;
	i1 = (int *) calloc(count, sizeof(int));
	i = 0;
	printf("Funcion original: ");
	while (i < count)
		printf("%i", i1[i++]);
	printf("\n");
	i2 = (int *) ft_calloc(count, sizeof(int));
	i = 0;
	printf("Funtsion propio:  ");
	while (i < count)
		printf("%i", i2[i++]);
	printf("\n");
	return (0);
}*/
