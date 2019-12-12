/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 18:29:12 by knarwhal          #+#    #+#             */
/*   Updated: 2019/12/04 15:57:36 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		checktouches(char *buf)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (i < 19)
	{
		if (buf[i] == '#')
		{
			if (i >= 1)
				buf[i - 1] == '#' ? count++ : 0;
			if (i <= 17)
				buf[i + 1] == '#' ? count++ : 0;
			if (i >= 5)
				buf[i - 5] == '#' ? count++ : 0;
			if (i <= 13)
				buf[i + 5] == '#' ? count++ : 0;
		}
		i++;
	}
	if (count > 5)
		return (1);
	return (0);
}

int		checkconsist(char *buf)
{
	int		i;
	int		hashcount;

	i = 0;
	hashcount = 0;
	while (i < 20)
	{
		if (buf[i] != '\n' && buf[i] != '.' && buf[i] != '#')
			return (0);
		if (buf[i] == '\n' && !(i % 5))
			return (0);
		if (buf[i] == '#')
			hashcount++;
	i++;
	}
	if (hashcount != 4 || (buf[i] != '\0' && buf[i] != '\n'))
		return (0);
	return (1);
}

int		validate(char *buf, int bytesread)
{
	int		i;
	int		tetramcount;

	i = 0;
	tetramcount = 0;
	while (i <= bytesread)
	{
		if (!checkconsist(buf + i))
			return (0);
		if (!checktouches(buf + i))
			return (0);
		i += 21;
		tetramcount++;
	}
	return (tetramcount);
}

int		parse(char *argv)
{
	int		fd;
	int		bytesread;
	char	buf[545];
	int		tetranum;

	fd = open(argv, O_RDONLY);
	bytesread = read(fd, buf, 545);
	close (fd);
	if (bytesread > 544 || bytesread < 19)
		return (0);
	buf[bytesread] = '\0';
	if (!(tetranum = validate(buf, bytesread)))
		return (0);
	return (tetranum);
}

int		main(int argc, char **argv)
{
	int	test = 0;
	
	if (argc != 2)
	{
		write(1,"usage: ./fillit source_file\n",28);
		return (0);
	}
	if (!(test = parse(argv[1])))
	{
		write(1,"error\n",6);
		return (0);
	}
	else
		printf("%d", test);
//		solve(arv[1]);
	return (0);
}

