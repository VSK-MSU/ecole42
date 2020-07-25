/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 16:58:03 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/07/22 17:36:16 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int ans;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		ans = 1;
		while (power > 0)
		{
			power--;
			ans *= nb;
		}
		return (ans);
	}
}
