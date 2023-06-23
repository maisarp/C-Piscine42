/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:17:32 by mapires           #+#    #+#             */
/*   Updated: 2023/03/08 09:47:30 by mapires          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)

{
	char	z;

	z = 'z';
	while (z >= 'a')
	{
		write (1, &z, 1);
		z--;
	}
}

//int	main(void)
//{
//	ft_print_reverse_alphabet();
//	return (0);
//}
