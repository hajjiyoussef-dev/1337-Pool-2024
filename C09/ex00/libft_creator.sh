# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yhajji <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/14 01:29:50 by yhajji            #+#    #+#              #
#    Updated: 2024/08/14 01:44:36 by yhajji           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

rm -f libft.a
find . -name "*.c" -type f -exec gcc -Wall -Werror -Wextra -c {} \;
ar rc libft.a *.o
find . -name "*.o" -type f -delete
