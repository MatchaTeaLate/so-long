/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovikav <anovikav@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 05:41:11 by anovikav          #+#    #+#             */
/*   Updated: 2023/01/28 06:16:03 by anovikav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main()
{
	void	*mlx;
	void	*img;
	char	*relative_path = "./test.xpm";
	int		img_width;
	int		img_height;

	mlx = mlx_init;
	img = mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);
}