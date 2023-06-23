/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:10:13 by mapires           #+#    #+#             */
/*   Updated: 2023/03/21 14:10:15 by mapires          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= 'a' && str[x] <= 'z'))
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

//     ft = ft_str_is_lowercase(str);
//     printf("%i\n", ft);
// }
