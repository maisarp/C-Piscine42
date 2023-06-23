/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:56:54 by mapires           #+#    #+#             */
/*   Updated: 2023/03/13 18:37:21 by mapires          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	ptr;

	ptr = *b;
	*b = *a;
	*a = ptr;
}

// int	main(void)
// {
// 	int	x;
// 	int	y;
// 	int	*a;
// 	int	*b;

// 	x = 27;
// 	y = 58;
// 	a = &x;
// 	b = &y;
// 	printf("%d\n", x);
// 	printf("%d\n", y);
// 	ft_swap(a, b);
// 	printf("%d\n", x);
// 	printf("%d\n", y);
// 	return (0);
// }
