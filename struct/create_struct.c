/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_struct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhaque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/14 01:24:57 by rhaque            #+#    #+#             */
/*   Updated: 2017/10/14 01:29:26 by rhaque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main()
{
	struct address
	{
		char name[50];
		char street[100];
		char city[50];
		char state[20];
		int pin;
	};

	return (0);
}
