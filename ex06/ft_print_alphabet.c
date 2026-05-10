/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 14:58:23 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/14 15:13:40 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_putchar(char c);

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a' - 1;
	while (c++ < 'z')
		ft_putchar(c);
}

// int	main(void)
// {
// 	ft_print_alphabet();
// }
