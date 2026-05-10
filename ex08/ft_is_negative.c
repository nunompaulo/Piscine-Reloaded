/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:14:39 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/14 15:20:01 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdlib.h>

void	ft_putchar(char c);

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 		ft_is_negative(atoi(av[1]));
// }
