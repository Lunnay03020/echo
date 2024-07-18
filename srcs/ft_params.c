/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_params.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: vdoignie <vdoignie@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/07/16 07:03:58 by vdoignie	       #+#    #+#	      */
/*   Updated: 2024/07/16 08:08:38 by vdoignie         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "../includes/echo.h"

int	ft_params(char *c)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (c[i] != '\0' && i < 4)
	{
		if (c[i] == 'e')
			j += 1;
		else if (c[i] == 'E')
			j += 4;
		else if (c[i] == 'n')
			j += 7;
		else if (c[i] == 's')
			j += 12;
		else if (c[i] == '-')
			j += 15;
		else
			return (0);
		i++;
	}
	if (i > 4)
		return (0);
	return (j);
}
