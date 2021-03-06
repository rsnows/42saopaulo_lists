/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 21:17:36 by rsoares-          #+#    #+#             */
/*   Updated: 2021/04/14 20:45:40 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	srcsize;

	srcsize = 0;
	while (src[srcsize] != '\0')
	{
		srcsize++;
	}
	if (size > 0)
	{
		c = 0;
		while (c < (size - 1) && src[c] != '\0')
		{
			dest[c] = src[c];
			c++;
		}
		dest[c] = '\0';
	}
	return (srcsize);
}
