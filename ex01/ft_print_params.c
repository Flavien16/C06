/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcamoin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:31:50 by fcamoin           #+#    #+#             */
/*   Updated: 2023/07/20 11:27:57 by fcamoin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	return ;
}

int	main(int argc, char **argv)
{
	int	n;

	n = 1;
	while (argc > n)
	{
		ft_putstr(argv[n++]);
		ft_putstr("\n");
	}
	return (0);
}
