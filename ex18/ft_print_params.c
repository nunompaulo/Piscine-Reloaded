/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 10:26:31 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/15 10:35:50 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_putchar(char c);

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

int	main(int argc, char **argv)
{
	int	i;
	int	p;

	i = 1;
	if (argc > i)
	{
		while (i < argc)
		{
			p = -1;
			while (argv[i][++p])
				ft_putchar(argv[i][p]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
