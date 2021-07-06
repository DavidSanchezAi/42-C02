/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 17:09:31 by dasanche          #+#    #+#             */
/*   Updated: 2021/07/05 17:52:38 by dasanche         ###   ########.fr       */
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

int	ft_str_is_alpha(char *str)
{
	int		cont;
	int		cont2;
	char	abc[52];
	int		is_abc;
	int		solution;

	solution = 1;
	cont = -1;
	cont2 = -1;
	is_abc = 1;
	ft_strcpy(abc, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
	while (str[++cont] != '\0')
	{
		while (++cont2 != 52)
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
