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

int		checktouches(*char buf)
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

int		checkconsist(*char buf)
{
	int		i;
	int		hashcount;

	i = 0;
	hashcount = 0;
	while (i < 19)
	{
		if (buf[i] != '\n' && buf[i] != '.' && buf[i] != '#')
			return (0);
		if (buf[i] == '\n' && !(i % 4))
			return (0);
		if (buf[i] == '#')
			hashcount++;
	i++;
	}
	if (hashcount != 4 || !buf[i] || buf[i] != '\n')
		return (0);
	return (1);
}

int		validate(*char buf, int bytesread)
{
	int		i;
	int		tetramcount;

	i = 0;
	tetramcount = 0;
	while (i <= bytesread)
	{
		if (!checkconsist(buf + i))
			return (0);
		if (!checktouches(buf + 1))
			return (0);
		i += 21;
		tetramcount++;
	}
	return (tetramcount);
}

int		parse(**char argv)
{
	int		fd;
	int		bytesread;
	char	buf[545];
	int		tetranum;

	fd = open(argv[1], O_RDONLY);
	bytesread = read(fd, buf, 545);
	close (fd);
	if (bytesread > 544 || bytesread < 19)
		return (0);
	buf[bytesread] = '\0';
	if (!(tetranum = validate(buf, bytesread)));
		return (0);
	return (1);
}

int		main(int argc, **char argv)
{
	if (argc != 2)
	{
		ft_putstr("usage: ./fillit source_file\n");
		return (0);
	}
	if (!parse(argv[1]))
	{
		ft_putstr("error\n");
		return (0);
	}
	else
		solve(arv[1]);
	return (0);
}

