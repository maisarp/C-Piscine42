/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:26:23 by mapires           #+#    #+#             */
/*   Updated: 2023/03/21 14:26:24 by mapires          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] == 0 || str[x] < 31 || str[x] == 127))
		{
			return (0);
		}
		x++;
	}
	return (1);
}

// int main(void)
// {
//     char    str[] = "\n";
//     int ft;

//     ft = ft_str_is_printable(str);
//     printf("%i\n", ft);
// }
