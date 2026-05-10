/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 09:54:27 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/15 10:04:56 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 		printf("String: %s\nResult: %d", av[1],
// 			ft_strlen(av[1]));
// 	return (0);
// }
