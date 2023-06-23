/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:51:33 by mapires           #+#    #+#             */
/*   Updated: 2023/03/21 13:51:35 by mapires          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= '0' && str[x] <= '9'))
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
//     char    str[] = "0,,,11";
//     int ft;

//     ft = ft_str_is_numeric(str);
//     printf("%i\n", ft);
// }
