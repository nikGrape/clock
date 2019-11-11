/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nik <Nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 18:44:59 by Nik               #+#    #+#             */
/*   Updated: 2019/11/10 23:50:14 by Nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "circle.h"

int			g_colors[] = {
	0xe9f0ea, 0xe30e31, 0x42ed13, 0xe1e807, 0x1b0cc4, 0x8d0cc4, 0x13ebe7
};

float	fmodule(float i)
{
	return (i < 0) ? -i : i;
}

void	line(float x1, float y1, float x2, float y2, int color)
{
	float	step_x;
	float	step_y;
	float	max;

	step_x = x2 - x1;
	step_y = y2 - y1;
	max = MAX(fmodule(step_x), fmodule(step_y));
	step_x /= max;
	step_y /= max;
	while ((int)(x1 - x2) || (int)(y1 - y2))
	{
		mlx_pixel_put(mlx_ptr, win_ptr, y1, x1, color);
		x1 += step_x;
		y1 += step_y;
		if (x1 > 1000 || y1 > 1000 || y1 < 0 || x1 < 0)
			break ;
	}
}

void 	second(int x, int y, int r)
{
	static float alpha = 6.28;
	static int color;
    int x1;
	int y1;
	if (alpha < 0)
	{
		color++;
		alpha = 6.28;
	}
	x1 = r * cos(alpha);
	y1 = r * sin(alpha);
	line(x, y, x1 + x, y1 + y, g_colors[color % 7]);
	alpha -= 0.01;
}

void 	minut(int x, int y, int r)
{
	static float alpha = 6.28;
    int x1;
	int y1;
	if (alpha < 0)
		alpha = 6.28;
	x1 = r * cos(alpha);
	y1 = r * sin(alpha);
	line(x, y, x1 + x, y1 + y, 0x13ebe7);
	alpha -= 0.000466666;
}

void	circle(int x, int y, int r)
{

	float alpha = 6.28;
    int x1;
	int y1;
    while (alpha >= 0)
	{
		x1 = r * cos(alpha);
		y1 = r * sin(alpha);
		mlx_pixel_put(mlx_ptr, win_ptr, y1 + x, x1 + y, g_colors[1]);
		alpha -= 0.1;
	}

}
 
