/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:17:04 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/15 11:42:15 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 		printf("Number: %d\nResult: %d", atoi(av[1]),
// 			ft_sqrt(atoi(av[1])));
// 	return (0);
// }
