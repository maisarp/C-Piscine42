/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:42:52 by mapires           #+#    #+#             */
/*   Updated: 2023/03/20 16:42:53 by mapires          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	src[] = "maisa";
// 	char	dest[15];
// 	ft_strcpy(dest, src);
// 	printf("%s\n", dest);
// 	return (0);
// }
