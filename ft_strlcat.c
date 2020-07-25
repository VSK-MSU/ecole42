/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 18:07:26 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/07/19 20:05:18 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#

int				str_len(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != 0)
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int sz_dest;
	int j;
	int l;

	l = 0;
	j = 0;
	sz_dest = str_len(dest);
	while (*(src + j) != '\0' && j < size)
	{
		*(dest + sz_dest + j) = *(src + j);
		j++;
	}
	*(dest + sz_dest + j) = '\0';
	while (*(src + l) != '\0')
		l++;
	return (l + size);
}
