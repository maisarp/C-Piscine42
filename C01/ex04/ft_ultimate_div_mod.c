/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:02:42 by mapires           #+#    #+#             */
/*   Updated: 2023/03/17 11:02:44 by mapires          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int	main(void)
// {
// 	int a;
// 	int b;

// 	a = 100;
// 	b = 3;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("%d\n", a);
// 	printf("%d\n", b);
// 	return(0);
// }
