/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:27:22 by rsoares-          #+#    #+#             */
/*   Updated: 2021/04/15 18:36:29 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int c;
	int d;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	d = 0;
	while (src[d] != '\0')
	{
		dest[c + d] = src[d];
		d++;
	}
	dest[c + d] = '\0';
	return (dest);
}
