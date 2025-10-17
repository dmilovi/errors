/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damilovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 19:44:34 by damilovi          #+#    #+#             */
/*   Updated: 2025/10/04 19:44:36 by damilovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

//output a string to a file descriptor, followed by a new line
void	ft_putendl_fd(char *str, int fd)
{
	int	i;

	i = 0;
	if (!str)
        return;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
	write (fd, "\n", 1);
}
/*
int main(void)
{
    char *str1 = "Hello";

    ft_putendl_fd(str1, 1);
    return 0;
}*/
