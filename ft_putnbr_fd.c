/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:47:35 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/04/24 19:31:45 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <fcntl.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*str;
	int		i;

	str = ft_itoa(n);
	i = 0;
	while (str[i] != '\0')
		write (fd, &str[i++], 1);
}

/*int	main(void)
{
	int		fd;
	int		n;

	n = -2147483648;
	n = -2;
	fd = open("putnbr_fd.txt", 1);
	if (fd == -1)
	{
		perror("Error al abrir el archivo");
		return (1);
	}
	ft_putnbr_fd(n, fd);
	close(fd);
	return (0);
}*/
