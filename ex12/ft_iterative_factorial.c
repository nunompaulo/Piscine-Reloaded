/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:42:28 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/16 10:10:33 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	result = nb;
	while (nb-- != 1)
	{
		result *= nb;
		if (nb > __INT_MAX__ / result || result == 0)
			return (0);
	}
	return (result);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 		printf("Number: %d\nResult: %d", atoi(av[1]),
// 			ft_iterative_factorial(atoi(av[1])));
// 	return (0);
// }
