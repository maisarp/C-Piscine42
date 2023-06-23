/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:53:40 by mapires           #+#    #+#             */
/*   Updated: 2023/03/10 16:53:41 by mapires          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	module(int n1, int n2);

void	module(int n1, int n2)
{
	char	zero1[2];
	char	zero2[2];

	zero1[0] = n1 / 10 + 48;
	zero1[1] = n1 % 10 + 48;
	zero2[0] = n2 / 10 + 48;
	zero2[1] = n2 % 10 + 48;
	write(1, &zero1, 2);
	write(1, " ", 1);
	write(1, &zero2, 2);
	if (n1 == 98)
		return ;
	write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 1;
	while (num1 <= 98)
	{
		while (num2 <= 99)
		{
			module(num1, num2);
			num2++;
		}
		num1++;
		num2 = num1 + 1;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
