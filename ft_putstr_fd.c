/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:27:22 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/04/21 14:12:46 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		write (fd, &s[i++], 1);
}

/*int	main(void)
{
	char	s[] = "Hace tiempo ke vengo al taller\ny no se a ke vengo...";
	int		fd;
	int		i;

	i = 0;
	fd = open("putstr_fd.txt", 1);
	if (fd == -1)
	{
		perror("Error al abrir el archivo");
		return (1);
	}
	ft_putstr_fd(s, fd);
	close(fd);
	return (0);
}*/
