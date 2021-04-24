/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgath <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 13:35:40 by sgath             #+#    #+#             */
/*   Updated: 2020/03/11 16:09:38 by sgath            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int q;

	q = 0;
	while (s1[q] == s2[q] && s1[q] != '\0' && s2[q] != '\0')
		q++;
	return (s1[q] - s2[q]);
}