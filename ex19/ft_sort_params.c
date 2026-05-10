/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 10:36:41 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/15 10:47:43 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_putchar(char c);

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// Code with funcion swap and strcmp, and main function to sort 
// the parameters and print them

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	main(int argc, char **argv)
{
	int	i;
	int	p;

	if (argc > 1)
	{
		i = 0;
		while (++i < argc)
		{
			p = i;
			while (++p < argc)
				if (ft_strcmp(argv[i], argv[p]) > 0)
					ft_swap(&argv[i], &argv[p]);
		}
		p = 1;
		while (p < argc)
		{
			i = -1;
			while (argv[p][++i])
				ft_putchar(argv[p][i]);
			ft_putchar('\n');
			p++;
		}
	}
	return (0);
}

/*	Code with function main, but with 27 lines of code, and without
	functions swap and strcmp */

// int	main(int argc, char **argv)
// {
// 	int		i;
// 	int		p;
// 	int		j;
// 	char	*temp;

// 	i = 0;
// 	while (++i < argc)
// 	{
// 		p = i;
// 		while (++p < argc)
// 		{
// 			j = 0;
// 			while (argv[i][j] && argv[p][j] && argv[i][j] == argv[p][j])
// 				j++;
// 			if (((unsigned char)argv[i][j] > (unsigned char)argv[p][j]) > 0)
// 				argv[p] = (temp = argv[i], argv[i] = argv[p], temp);
// 		}
// 	}
// 	p = 0;
// 	while (++p < argc)
// 	{
// 		i = -1;
// 		while (argv[p][++i])
// 			ft_putchar(argv[p][i]);
// 		ft_putchar('\n');
// 	}
// 	return (0);
// }
