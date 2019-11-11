/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nik <Nik@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 18:46:56 by Nik               #+#    #+#             */
/*   Updated: 2019/11/10 23:52:03 by Nik              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "circle.h"

int deal_key(int c, void *data)
{
	int i = 0;
	while (1)
	{
		// mlx_clear_window(mlx_ptr, win_ptr);
		// minut(500, 500, 300);
		second(500, 500, 300);
		circle(500, 500, 300);
		mlx_do_sync(mlx_ptr);
	}
	return (0);
}

int main()
{


	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, 1000, 1000, "lem_in");
	
	// line(10, 10, 50, 500);
	// circle(500, 500, 300);
	// mlx_key_hook(win_ptr, deal_key, NULL);
	mlx_hook(win_ptr, 2, 5, deal_key, NULL);
	mlx_loop(mlx_ptr);
}