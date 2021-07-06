/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 17:53:52 by dasanche          #+#    #+#             */
/*   Updated: 2021/07/05 18:38:55 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
	{
	int	pos;

	pos = -1;
	while (src[++pos] != '\0')
		dest[pos] = src[pos];
	dest[pos] = '\0';
	return (dest);
}

int	ft_str_is_numeric(char *str)
{
	int		cont;
	int		cont2;
	char	abc[11];
	int		is_abc;
	int		solution;

	solution = 1;
	cont = -1;
	cont2 = -1;
	is_abc = 1;
	ft_strcpy(abc, "1234567890");
	while (str[++cont] != '\0')
	{
		while (++cont2 != 10)
			if (str[cont] == abc[cont2])
				is_abc = 0;
		if (is_abc == 1)
		{
			solution = 0;
			break ;
		}
		is_abc = 1;
		cont2 = -1;
	}
	return (solution);
}
