/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_params.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: vdoignie <vdoignie@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/07/16 07:03:58 by vdoignie	       #+#    #+#	      */
/*   Updated: 2024/07/16 13:35:25 by vdoignie         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "../includes/echo.h"

int	ft_params(char *c)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	j = 0;
	k = ft_strlen(c);
	if (k == 2)
	{
		if (c[i] == '-')
			return (2);
		else
		{
			if (c[i] == 'e')
				j += 1;
			else if (c[i] == 'E')
				j += 4;
			else if (c[i] == 'n')
				j += 7;
			else if (c[i] == 's')
				j += 12;
			else
				return (0);
			i++;
		}
	}
	while (c[i] != '\0' && c[i] != c[0] && i < 4)
	{
		if (c[i] == 'e')
			j += 1;
		else if (c[i] == 'E')
			j += 4;
		else if (c[i] == 'n')
			j += 7;
		else if (c[i] == 's')
			j += 12;
		else
			return (0);
		i++;
	}
	if (i > 4)
		return (0);
	return (j);
}
