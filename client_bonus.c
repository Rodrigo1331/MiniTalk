/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 09:44:26 by rcruz-an          #+#    #+#             */
/*   Updated: 2023/05/29 16:08:17 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	message_to_server(int pid, char c)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((c & (1 << bit)) == 0)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(300);
		bit++;
	}
}

void	message_recived(int signal)
{
	if (signal == SIGUSR1)
		ft_printf("The message was recieved by the server");
}

int	main(int ac, char **av)
{
	int				pid;
	int				i;
	struct sigaction	siga;

	siga.sa_handler = &message_recived;
	i = 0;
	if (ac != 3)
		ft_printf("Error!\nYou need a process ID and a message as inputs\n");
	else
	{
		pid = ft_atoi(av[1]);
		while (av[2][i])
		{
			sigaction(SIGUSR1, &siga, NULL);
			sigaction(SIGUSR2, &siga, NULL);
			message_to_server(pid, av[2][i]);
			i++;
		}
		message_to_server(pid, av[2][i]);
		message_to_server(pid, '\n');
	}
}
