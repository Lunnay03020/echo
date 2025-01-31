/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdoignie <vdoignie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:30:11 by vdoignie          #+#    #+#             */
/*   Updated: 2024/07/16 13:32:34 by vdoignie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/echo.h"

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}
