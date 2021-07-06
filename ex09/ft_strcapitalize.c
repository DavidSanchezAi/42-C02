/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 11:45:02 by dasanche          #+#    #+#             */
/*   Updated: 2021/07/06 12:08:10 by dasanche         ###   ########.fr       */
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

char	*ft_strlowcase(char *str)
{
	int		cont;
	int		cont2;
	char	abc[26];
	int		solution;

	solution = 1;
	cont = -1;
	cont2 = -1;
	ft_strcpy(abc, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	while (str[++cont] != '\0')
	{
		cont2 = -1;
		while (++cont2 != 26)
			if (str[cont] == abc[cont2])
				str[cont] += 32;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	char	abc[26];
	int		cont;
	int		last_was_space;
	int		cont2;

	ft_strcpy(abc, "abcdefghijklmnopqrstuvwxyz");
	ft_strlowcase(str);
	cont = -1;
	last_was_space = 0;
	while (str[++cont] != '\0')
	{
		cont2 = -1;
		if (last_was_space == 1)
		{
			last_was_space = 0;
			while (++cont2 != 26)
				if (str[cont] == abc[cont2])
					str[cont] -= 32;
		}
		if (str[cont] == 32)
			last_was_space = 1;
	}
	return (str);
}
