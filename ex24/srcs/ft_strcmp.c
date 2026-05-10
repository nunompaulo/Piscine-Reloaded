/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 10:05:31 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/15 10:12:49 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 3)
// 		printf("Texto 1: %s\nTexto 2: %s\nResult: %d\n", av[1], av[2],
// 			ft_strcmp(av[1], av[2]));
// 	return (0);
// }
