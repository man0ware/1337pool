/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-qarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 15:06:08 by iel-qarf          #+#    #+#             */
/*   Updated: 2024/08/11 15:10:25 by iel-qarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*#include <stdio.h>
int	main()
{
  int nb = 3;
  int power = 2;

  printf("The result is: %d\n", ft_recursive_power(nb, power));
}*/
