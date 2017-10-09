/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StaticVariable.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhaque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 03:46:20 by rhaque            #+#    #+#             */
/*   Updated: 2017/09/24 04:09:48 by rhaque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// When a vaibale has been declared "Static" varibale hold the value beyond its's scope;

#include <stdio.h>

int		static_test()
{
	static int  i = 0;
	i++;
	return i;
}

int		main()
{


	printf("%d\n", static_test());

	printf("%d", static_test());
	
	return (0);
}
	
