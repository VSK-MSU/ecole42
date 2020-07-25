/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 18:51:11 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/07/18 21:57:40 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 1;
	while (*scr != '\0' && i <= n)
	{
		*dest = *src;
		dest += 1;
		src += 1;
	}
	while (i <= n)
	{
		*dest = '\0';
		dest += 1;
	}
	dest -= n - 1;
	return (dest);
}
