/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdoignie <vdoignie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 06:58:28 by vdoignie          #+#    #+#             */
/*   Updated: 2024/07/16 17:08:11 by vdoignie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ECHO_H
# define ECHO_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *c, int k);
int		ft_params(char *c);
int		ft_strlen(char *c);

#endif
