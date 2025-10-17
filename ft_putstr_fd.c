/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damilovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 19:26:45 by damilovi          #+#    #+#             */
/*   Updated: 2025/10/04 19:26:47 by damilovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

//output a string to a file descriptor
void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}
/*
int main(void)
{
    char *str1 = "fljdf";

    ft_putstr_fd(str1, 1);
    return 0;
}*/
