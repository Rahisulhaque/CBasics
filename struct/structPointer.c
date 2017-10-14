/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structPointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhaque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/14 03:10:56 by rhaque            #+#    #+#             */
/*   Updated: 2017/10/14 03:23:02 by rhaque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

struct		Point
{
	int		x;
	int		y;
};

int			main()
{
	struct	Point P1 = {10, 20};
	struct	Point *PPoint = &P1;

	printf("The program has worked.\n");
	printf(" %d and %d.", PPoint->x,PPoint->y);
	
	return (0);
}	
