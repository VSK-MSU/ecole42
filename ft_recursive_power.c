/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 18:13:39 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/07/22 18:19:19 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		ft_recursive_power(int nb, int power)
{

	int ans;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		ans = nb * ft_recursive_power(nb, power - 1);
		return (ans);
	}
}
