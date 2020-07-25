/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 15:12:36 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/07/22 17:41:06 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial (int nb)
{
	int ans;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		nb--;
		ans = (nb + 1) * ft_recursive_factorial(nb);
		return (ans);
	}
}
