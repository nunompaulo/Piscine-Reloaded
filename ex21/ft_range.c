/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 14:12:27 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/16 09:19:44 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	if (min >= max)
		return (NULL);
	i = max - min;
	arr = malloc(i * (sizeof(int)));
	if (!arr)
		return (NULL);
	while (max - i < max)
	{
		arr[i - 1] = min + i - 1;
		i--;
	}
	return (arr);
}

// int	main(int argc, char **argv)
// {
// 	int	min;
// 	int	max;
// 	int	*range;
// 	int	i;

// 	if (argc == 3)
// 	{
// 		min = atoi(argv[1]);
// 		max = atoi(argv[2]);
// 		range = ft_range(min, max);
// 		if (!range)
// 		{
// 			printf("Invalid range: min should be less than max.\n");
// 			return (1);
// 		}
// 		printf("Range from %d to %d:\n", min, max);
// 		i = -1;
// 		while (++i < (max - min))
// 			printf("%d ", range[i]);
// 		printf("\n");
// 		free(range);
// 	}
// 	return (0);
// }
