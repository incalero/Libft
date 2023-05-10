/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:47:56 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/04/21 14:03:39 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <fcntl.h>
#include <stdio.h>*/

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		write (fd, &s[i++], 1);
	write (fd, "\n", 1);
}

/*int	main(void)
{
	char	s[] = "Tu madre tuvo la curpa";
	char	s2[] = "ke por deja ke la puerta abierta";
	char	s3[] = "y yo por meterme adentro";
	char	s4[] = "y tu por kedarte kieta";
	int		fd;
	int		i;

	i = 0;
	fd = open("putendl_fd.txt", 1);
	if (fd == -1)
	{
		perror("Error al abrir el archivo");
		return (1);
	}
	ft_putendl_fd(s, fd);
	ft_putendl_fd(s2, fd);
	ft_putendl_fd(s3, fd);
	ft_putendl_fd(s4, fd);
	close(fd);
	return (0);
}*/
