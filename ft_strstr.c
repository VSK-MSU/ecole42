/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 15:37:47 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/07/19 19:46:09 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 < *s2)
			return (*s1 - *s2);
		else if (*s1 > *s2)
			return (*s1 - *s2);
		else
		{
			s1++;
			s2++;
		}
	}
	if ((*s1 != '\0' && *s2 == '\0') || (*s1 = '\0' && *s2 == '\0'))
		return (0);
	else if (*s1 == '\0' && *s2 != '\0')
		return (10);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return (str);
	else
	{
		while (*str != '\0')
		{
			if (ft_strcmp(str, to_find) == 0)
				return (str);
			str++;
		}
	}
	return (NULL);
}
