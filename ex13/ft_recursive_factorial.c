/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:53:21 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/14 16:05:39 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	result = ft_recursive_factorial(nb - 1);
	if (result == 0 || nb > __INT_MAX__ / result)
		return (0);
	return (nb * result);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 		printf("Number: %d\nResult: %d", atoi(av[1]),
// 			ft_recursive_factorial(atoi(av[1])));
// 	return (0);
// }
