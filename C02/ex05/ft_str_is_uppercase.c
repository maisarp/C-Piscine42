/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:18:10 by mapires           #+#    #+#             */
/*   Updated: 2023/03/21 14:18:11 by mapires          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= 'A' && str[x] <= 'Z'))
		{
			x++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

// int main(void)
// {
//     char    str[] = "maisa";
//     int ft;

//     ft = ft_str_is_uppercase(str);
//     printf("%i\n", ft);
// }
