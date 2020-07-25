/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 20:50:24 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/07/18 22:32:40 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= ' ' && *str <= '~'))
		{
			return (0);
		}
		str += 1;
	}
	return (1);
}
