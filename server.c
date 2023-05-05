/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 09:08:14 by rcruz-an          #+#    #+#             */
/*   Updated: 2023/05/05 14:38:38 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handler(int signal)
{
	static int	c;
	static int	bit = 0;

	if (signal == SIGUSR1)
		c |= 1 << bit;
	bit++;
	if (bit == 8)
	{
		write(1, &c, 1);
		bit = 0;
		c = 0;
	}
}

int main (int ac, char **av)
{
	struct sigaction sa;

	sa.sa_handler = &handler;
	(void)av;
	if (ac != 1)
	{
		ft_printf("error\nTry to use: ./server\n");
		return (0);
	}
	ft_printf("This is my pid: %d\n", getpid());
	while (1)
	{
		sigaction(SIGUSR1, &action, NULL);
		sigaction(SIGUSR2, &action, NULL);
		pause();
	}
}