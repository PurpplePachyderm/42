/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilefournier <emilefournier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:02:33 by emilefourni       #+#    #+#             */
/*   Updated: 2024/02/12 16:15:38 by emilefourni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		letter_count(char c)
{
	int	repeat;

	if (c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else
		repeat = 1;
	return (repeat);
}

int		main(int ac, char **av)
{
	int	repeat;

	if (ac == 2)
	{
		while (*av[1])
		{
			repeat = letter_count(*av[1]);
			while (repeat--)
				write(1, av[1], 1);
			av[1]++;
		}
	}
	write(1, "\n", 1);
}