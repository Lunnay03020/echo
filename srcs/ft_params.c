/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_params.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: vdoignie <vdoignie@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/07/16 07:03:58 by vdoignie	       #+#    #+#	      */
/*   Updated: 2024/07/17 02:26:05 by vdoignie         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "../includes/echo.h"

int	calcul(char c)
{
	if (c == 'e')
		return (1);
	else if (c == 'E')
		return (4);
	else if (c == 'n')
		return (7);
	else if (c == 's')
		return (12);
	else
		return (0);
}

int	calcul_one(char c)
{
	int	j;

	if (c == '-')
		return (99);
	else
	{
		j = calcul(c);
		if (j == 0)
			return (0);
		return (j);
	}
}

int	ft_params(char *c)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 1;
	j = 0;
	k = ft_strlen(c);
	l = 0;
	if (k == 2)
	{
		l = calcul_one(c[i]);
		return (l);
	}
	while (c[i] != '\0' && c[i] != c[0] && i < 4)
	{
		j = calcul(c[i]);
		if (j == 0)
			return (0);
		i++;
		l = l + j;
	}
	if (i > 4)
		return (0);
	return (l);
}
