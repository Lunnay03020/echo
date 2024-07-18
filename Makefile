# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdoignie <vdoignie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/16 07:08:05 by vdoignie          #+#    #+#              #
#    Updated: 2024/07/16 13:38:19 by vdoignie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

MY_C_FILES = srcs/*.c
MY_H_FILES = includes/*.h

echo: ${MY_C_FILES}
	${CC} ${CFLAGS} -o echo ${MY_C_FILES}
