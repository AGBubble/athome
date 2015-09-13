/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandrian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/13 12:56:20 by aandrian          #+#    #+#             */
/*   Updated: 2015/09/13 13:00:23 by aandrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s2 == '\0' || *s1 == '\0')
		return (0);
	if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
		return (match(s1, s2));
	}
	if (*s2 == '*')
	{
		if (match(s1 + 1, s2) || match(s1 + 1, s2 + 1))
			return (1);
		else
			return (0);
	}
			return (0);
}