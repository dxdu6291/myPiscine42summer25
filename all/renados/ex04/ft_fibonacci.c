/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renados- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 11:46:22 by renados-          #+#    #+#             */
/*   Updated: 2025/08/20 12:07:54 by renados-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	else
		return (ft_fibonacci (index - 1) + ft_fibonacci(index - 2));
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n%", ft_fibonatti(5));
}
*/
