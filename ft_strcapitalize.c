/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 22:33:26 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/07/18 23:32:45 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	down(char *str)
{
	if ((*str <= 'Z' && *str >= 'A') || (*str <= '9' && *str >= '0'))
	{
		if (*(str + 1) <= 'Z' && *(str + 1) >= 'A')
			*(str + 1) += 'a' - 'A';
	}
	if (*str >= 'a' && *str <= 'z' && *(str + 1) <= 'Z' && *(str + 1) >= 'A')
		*(str + 1) += 'a' - 'A';
}

void	up(char *str)
{
	if (!((*str <= 'Z' && *str >= 'A') || (*str <= '9' && *str >= '0')))
	{
		if (!(*(str) <= 'z' && *(str) >= 'a'))
		{
			if (*(str + 1) >= 'a' && *(str + 1) <= 'z')
				*(str + 1) -= 'a' - 'A';
		}
	}
}

char	*ft_strcapitalize(char *str)
{
	char *timed;

	timed = str;
	if (*str >= 'a' && *str <= 'z')
		*str -= 'a' - 'A';
	while (*(str + 1) != '\0')
	{
		down(str);
		up(str);
		str += 1;
	}
	return (timed);
}
