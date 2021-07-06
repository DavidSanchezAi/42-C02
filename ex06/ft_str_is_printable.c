/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 10:46:57 by dasanche          #+#    #+#             */
/*   Updated: 2021/07/06 10:59:26 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		cont;
	int		solution;

	solution = 1;
	cont = -1;
	while (str[++cont] != '\0')
	{
		if (str[cont] > 31 && str[cont] < 127)
			continue ;
		else
		{
			solution = 0;
			break ;
		}
	}
	return (solution);
}
