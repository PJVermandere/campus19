/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvermand <pvermand@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:41:35 by pvermand          #+#    #+#             */
/*   Updated: 2024/02/07 19:21:27 by pvermand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	start;
	char	end;

	start = 'a';
	end = 'z';
	while (start <= end)
	{
		write(1, &start, 1);
		start++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
