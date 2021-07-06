/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 11:11:35 by dasanche          #+#    #+#             */
/*   Updated: 2021/07/06 11:36:31 by dasanche         ###   ########.fr       */
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

char	*ft_strupcase(char *str)
{
	int		cont;
	int		cont2;
	char	abc[26];
	int		solution;

	solution = 1;
	cont = -1;
	cont2 = -1;
	ft_strcpy(abc, "abcdefghijklmnopqrstuvwxyz");
	while (str[++cont] != '\0')
	{
		cont2 = -1;
		while (++cont2 != 26)
			if (str[cont] == abc[cont2])
				str[cont] -= 32;
	}
	return (str);
}
