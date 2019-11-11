/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circle.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nik <Nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 18:43:58 by Nik               #+#    #+#             */
/*   Updated: 2019/11/10 23:29:26 by Nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CIRCLE_H
# define CIRCLE_H

#include "minilibx_macos/mlx.h"
#include "libft/libft.h"
#include <math.h>

	void *mlx_ptr;
	void *win_ptr;

void	line(float x1, float y1, float x2, float y2, int color);
void	circle(int x, int y, int r);
void 	minut(int x, int y, int r);
void 	second(int x, int y, int r);

#endif
