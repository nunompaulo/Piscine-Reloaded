/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 10:51:02 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/17 11:16:32 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	i = 0;
	while (src[i])
		i++;
	dup = malloc((i + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	i = -1;
	while (src[++i])
		dup[i] = src[i];
	dup[i] = '\0';
	return (dup);
}

// int	main(void)
// {
// 	char	*original = "Hello, World!";
// 	char	*copy = ft_strdup(original);

// 	if (copy)
// 	{
// 		printf("Source: %s\n", original);
// 		printf("Copy:   %s\n", copy);
// 		free(copy);
// 	}
// 	else
// 		printf("Memory allocation failed.\n");
// 	return (0);
// }
