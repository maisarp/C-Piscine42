/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 10:21:52 by mapires           #+#    #+#             */
/*   Updated: 2023/03/14 10:21:56 by mapires          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int a;
// 	int b;
// 	int div;
// 	int mod;

// 	a = 50;
// 	b = 5;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("%d\n", div);
// 	printf("%d\n", mod);
// 	return (0);
// }
