/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarmier <lmarmier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:19:02 by lmarmier          #+#    #+#             */
/*   Updated: 2021/11/09 15:02:59 by lmarmier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)

{
	int					i;
	const unsigned char	*s2;

	s2 = s;
	i = 0;
	while (s2[i] != 0 && i < n)
	{
		if (s2[i] == c)
			return ((void *) &s2[i]);
		i++;
	}
	if (c == 0 && i < n)
		return ((void *) &s2[i]);
	return (0);
}
