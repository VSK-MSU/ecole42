/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 14:54:29 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/07/19 19:41:59 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*(dest + i) != '\0')
		i++;
	while ((*(src + j) != '\0') && nb > 0)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
		nb--;
	}
	*(dest + i) = '\0';
	return (dest);
}
