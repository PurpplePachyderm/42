/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emfourni <emfourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:51:05 by emfourni          #+#    #+#             */
/*   Updated: 2024/02/02 17:13:03 by emfourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../so_long.h"

// int	main(int argc, char **argv)
// {
// 	if (argc != 2 || ft_strncmp(&argv[1][ft_strlen(argv[1]) - 4], ".ber", 4) != 0)
// 	{
// 		ft_printf("Rentre une map .ber en parametre gros, sois pas con\n");
// 		return (0);
// 	}
// }

#include "../so_long.h"

int	main(void)
{
	void	*mlx;
	void	*img;

	mlx = mlx_init();
	img = mlx_new_image(mlx, 1920, 1080);
}


