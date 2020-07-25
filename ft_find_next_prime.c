/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 20:57:41 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/07/22 21:02:54 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int del;

	if (nb >= -1 && nb <= 1)
		return (0);
	else
	{
		del = 2;
		while ((nb < 0 && del < -nb ) || (nb > 0 && del < nb))
		{
			if(nb % del == 0)
				return (0);
			del++;
		}
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
