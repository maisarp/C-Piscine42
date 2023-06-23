/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapires <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:32:50 by mapires           #+#    #+#             */
/*   Updated: 2023/03/20 18:32:52 by mapires          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (src[x] != '\0' && x <= n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	dest[5];
// 	char	src[] = "TESTETESTE";

// 	ft_strncpy(dest, src, 4);
// 	printf("%s\n", dest);
// 	return (0);
// }
