/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarmier <lmarmier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:05:37 by lmarmier          #+#    #+#             */
/*   Updated: 2021/11/09 15:18:19 by lmarmier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int					i;
	const unsigned char	*ss1;
	const unsigned char	*ss2;

	ss1 = s1;
	ss2 = s2;
	i = 0;
	while (ss1[i] == ss2[i] && ss1[i] != '\0' && ss2[i] != '\0' && i < n - 1)
		i++;
	return (ss1[i] - ss2[i]);
}
