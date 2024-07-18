/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: vdoignie <vdoignie@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/07/16 07:02:34 by vdoignie	       #+#    #+#	      */
/*   Updated: 2024/07/16 17:03:45 by vdoignie         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "../includes/echo.h"

void	ft_putstr(char *c, int k)
{
	int		i;

	i = 0;
	while (c[i] != '\0')
	{
		if (k % 4 == 0 || k % 11 == 0 || k % 16 == 0 || k % 23 == 0)
		{
			if ((c[i] == '\\') && (c[i + 1] != 32))
			{
				if (c[i + 1] == 'a')
					ft_putchar('\a');
				else if (c[i + 1] == 'b')
					ft_putchar('\b');
				else if (c[i + 1] == 'f')
					ft_putchar('\f');
				else if (c[i + 1] == 'n')
					ft_putchar('\n');
				else if (c[i + 1] == 'r')
					ft_putchar('\r');
				else if (c[i + 1] == 't')
					ft_putchar('\t');
				else if (c[i + 1] == 'v')
					ft_putchar('\v');
				i = i + 2;
			}
			else if ((c[i] == '\\') && (c[i + 1] == '\\'))
				ft_putchar('\\');
		}
		ft_putchar(c[i++]);
	}
}
