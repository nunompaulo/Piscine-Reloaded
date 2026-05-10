/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 15:10:09 by npaulo            #+#    #+#             */
/*   Updated: 2026/05/10 15:57:50 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_putchar function is supplied by the system
// We need only to use the prototype

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	c;

	c = '0' - 1;
	while (c++ < '9')
		ft_putchar(c);
}
