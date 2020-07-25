/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 13:12:07 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/07/22 15:52:00 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb) 
{
	int ans;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		ans = 1;
		while (nb >= 1)
			ans *= nb--;
		return (ans);
	}
}
