/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 17:45:15 by rsoares-          #+#    #+#             */
/*   Updated: 2021/04/15 18:37:40 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int c;
	int d;

	c = 0;
	if (to_find[c] == '\0')
	{
		return (str);
	}
	while (str[c] != '\0')
	{
		d = 0;
		while (str[c + d] != '\0' && str[c + d] == to_find[d])
		{
			if (to_find[d + 1] == '\0')
				return (&str[c]);
			d++;
		}
		c++;
	}
	return (0);
}
