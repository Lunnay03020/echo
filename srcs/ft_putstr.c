/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: vdoignie <vdoignie@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/07/16 07:02:34 by vdoignie	       #+#    #+#	      */
/*   Updated: 2024/07/17 02:27:46 by vdoignie         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "../includes/echo.h"

char	which_one(char c)
{
	if (c == 'a')
		return ('\a');
	else if (c == 'b')
		return ('\b');
	else if (c == 'e')
		return ('\e');
	else if (c == 'f')
		return ('\f');
	else if (c == 'n')
		return ('\n');
	else if (c == 'r')
		return ('\r');
	else if (c == 't')
		return ('\t');
	else if (c == 'v')
		return ('\v');
	else
		return (c);
}

void	ft_putstr(char *c, int k)
{
	int		i;
	char	re;

	i = 0;
	while (c[i] != '\0')
	{
		if (k == 1 || k % 8 == 0 || k % 13 == 0 || k % 20 == 0)
		{
			if ((c[i] == '\\') && (c[i + 1] == '\\'))
				ft_putchar('\\');
			else if ((c[i] == '\\') && (c[i + 1] != 32))
			{
				re = which_one(c[i + 1]);
				ft_putchar(re);
				i = i + 2;
			}
		}
		ft_putchar(c[i++]);
	}
}
