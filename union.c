/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emfourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:49:45 by emfourni          #+#    #+#             */
/*   Updated: 2023/07/13 18:29:00 by emfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_doublon(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_union(char *s1, char *s2)
{
	int	i;
	int	k;
	char str[200];

	i = 0;
	k = 0;
	while (s1[i])
	{
		if (!ft_doublon(s1[i], str))
		{
			str[k] = s1[i];
			write(1, &str[k++], 1);
		}
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (!ft_doublon(s2[i], str))
		{
			str[k] = s2[i];
			write(1, &str[k++], 1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write (1, "\n", 1);
	return (0);
}
