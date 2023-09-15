/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptrarr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:45:21 by jchirino          #+#    #+#             */
/*   Updated: 2023/09/13 17:28:58 by jchirino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	mi_array[] = {1,23,17,4,-5,100};
int	*ptr;

int	main(void)
{
	int	i;
	ptr = &mi_array[0];

	printf("\n\n");

	for (i = 0; i < 6; i++)
	{
		printf("mi_array[%d] 0 %d ", i, mi_array[i]);
		printf("ptr + %d = %d\n",i, *(++ptr));
	}
	return (0);
}
