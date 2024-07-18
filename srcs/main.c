/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: vdoignie <vdoignie@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/07/16 07:05:02 by vdoignie	       #+#    #+#	      */
/*   Updated: 2024/07/16 08:06:01 by vdoignie         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "../includes/echo.h"

int	main(int argc, char *argv[])
{
	int	i;
	int	k;

	i = 1;
	k = 0;
	if (argc == 1)
	{
		ft_putchar('\n');
		return (0);
	}
	if (argv[1][0] == '-')
		k = ft_params(argv[i]);
	if (k != 0)
		i++;
	while (i < argc - 1)
	{
		ft_putstr(argv[i], k);
		if (k == 12 || k == 13 || k == 16 || k == 19 || k == 20 || k == 23)
			i++;
		else
		{
			ft_putchar(' ');
			i++;
		}
	}
	ft_putstr(argv[i], k);
	if (k == 7 || k == 8 || k == 11 || k == 19 || k == 20 || k == 23)
		return (argc);
	ft_putchar('\n');
}
