/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovikav <anovikav@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:27:25 by anovikav          #+#    #+#             */
/*   Updated: 2023/01/28 08:50:14 by anovikav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "libft/libft.h"
# include "mlx_linux/mlx.h"
# include "libft/ft_printf/ft_printf.h"

# define FAIL 1
# define SUCCESS 0

typedef	struct	s_vector
{
	int	x;
	int	y;
}				t_vector;

typedef struct	s_data
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

typedef struct	s_image
{
	void	*reference;
	t_vector	size;
	char		*pixels;
	
}				t_image;

#endif
