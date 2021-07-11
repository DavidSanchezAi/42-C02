/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 12:21:37 by dasanche          #+#    #+#             */
/*   Updated: 2021/07/08 13:09:58 by dasanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = -1;
	while (src[++i] != '\0' && i < size - 1)
		dest[i] = src[i];
	dest[i++] = '\0';
	return (size - i);
}
