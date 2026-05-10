/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:23:21 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/16 17:44:42 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int		fd;
	int		size_r;
	char	copo[1024];

	if (ac < 2)
		return (write(2, "File name missing.\n", 19), 1);
	if (ac > 2)
		return (write(2, "Too many arguments.\n", 20), 1);
	fd = open(av[1], O_RDONLY);
	if (fd < 0)
		return (write(2, "Cannot read file.\n", 18), 1);
	size_r = read(fd, copo, 1024);
	while (size_r > 0)
		size_r = (write(1, copo, size_r), read(fd, copo, 1024));
	return (close(fd), 0);
}
