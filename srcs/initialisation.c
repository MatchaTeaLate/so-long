/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialisation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovikav <anovikav@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 01:43:57 by anovikav          #+#    #+#             */
/*   Updated: 2023/01/28 20:38:36 by anovikav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h>

# define WINDOW_WIDTH 1920
# define WINDOW_HEIGHT 1080

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;
	
	dst = data->addr + (y *data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

int	main()
{
	void	*mlx = NULL;
	t_data	img;
	void	*win;
	char	*relative_path = "test.xpm";
	int		img_width;
	int		img_height;
	
	mlx = mlx_init(mlx);
	if (mlx == NULL)
		return (0);
	win = mlx_new_window(mlx, WINDOW_WIDTH, WINDOW_HEIGHT, "so_long");
	img.img = mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);
	mlx_put_image_to_window(mlx, win, img.img, 0, 0);
	mlx_loop(mlx);
	mlx_destroy_window(mlx, win);
	mlx_destroy_display(mlx);
	free(mlx);
}