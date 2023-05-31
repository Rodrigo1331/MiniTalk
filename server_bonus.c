/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 09:44:52 by rcruz-an          #+#    #+#             */
/*   Updated: 2023/05/29 14:31:44 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	handler(int signal, siginfo_t *info, void *n)
{
	static int	c;
	static int	bit = 0;

	(void)n;
	(void)info;
	if (signal == SIGUSR1)
		c |= 1 << bit;
	bit++;
	if (bit == 8)
	{
		if (c == '\0')
			kill (info->si_pid, SIGUSR1);
		write(1, &c, 1);
		bit = 0;
		c = 0;
	}
}

int main (int ac, char **av)
{
	struct sigaction siga;

	siga.sa_sigaction = &handler;
	siga.sa_flags = SA_SIGINFO;
	(void)av;
	if (ac != 1)
	{
		ft_printf("error\nTry to use: ./server\n");
		return (0);
	}
	ft_printf("This is my pid: %d\n", getpid());
	while (1)
	{
		sigaction(SIGUSR1, &siga, NULL);
		sigaction(SIGUSR2, &siga, NULL);
		pause();
	}
}
