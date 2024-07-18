/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: vdoignie <vdoignie@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/07/16 07:02:34 by vdoignie	       #+#    #+#	      */
/*   Updated: 2024/07/16 07:32:39 by vdoignie         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "../includes/echo.h"

void	ft_putstr(char *c, int k)
{
	int		i;
	char	re;

	i = 0;
	re = ' ';
	while (c[i] != '\0')
	{
		re = c[i];
		if (k == 4 || k == 11 || k == 16 || k == 23)
		{
			if ((re == '\\') && (c[i + 1] != 32))
			{
				ft_putchar('\\');
				re = c[i + 1];
				ft_putchar(re);
			}
		}
		re = c[i];
		ft_putchar(re);
		i++;
	}
}
