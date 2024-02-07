/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvermand <pvermand@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:43:39 by pvermand          #+#    #+#             */
/*   Updated: 2024/02/07 20:09:04 by pvermand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	start;

	start = 48;
	while (start <= 57)
	{
		write(1, &start, 1);
		start++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
