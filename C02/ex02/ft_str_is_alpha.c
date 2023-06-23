/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:41:31 by mapires           #+#    #+#             */
/*   Updated: 2023/03/21 13:47:10 by mapires          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= 'a' && str[x] <= 'z'))
		{
			x++;
		}
		else if ((str[x] >= 'A' && str[x] <= 'Z'))
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
//     char    str[] = ",,,";
//     int ft;

//     ft = ft_str_is_alpha(str);
//     printf("%i\n", ft);
// }
