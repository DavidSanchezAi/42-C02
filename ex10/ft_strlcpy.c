/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 12:21:37 by dasanche          #+#    #+#             */
/*   Updated: 2021/07/06 13:13:01 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cont;
	int				i;
	int				j;

	i = 0;
	j = 0;
	size++;
	cont = size;
	while (cont > 1)
	{
		dest [i] = src [i];
		i++;
		cont--;
	}
	dest [i] = '\0';
	while (src [j] != '\0')
		j++;
	return (j);
}
