/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:09:29 by mapires           #+#    #+#             */
/*   Updated: 2023/03/21 15:09:31 by mapires          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] = str[x] - 32;
		}
		x++;
	}
	return (str);
}

// int    main(void)
// {
//     char    str[] = "maisa";
//     char     *ft;

//     ft = ft_strupcase(str);
//     printf("%s\n", ft);
// }
