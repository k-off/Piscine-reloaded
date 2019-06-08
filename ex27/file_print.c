/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   file_print.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 15:46:01 by pacovali      #+#    #+#                 */
/*   Updated: 2019/01/09 18:26:35 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		fd;
	char	buf[2];

	buf[1] = '\0';
	if (argc < 2)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else if ((fd = open(argv[1], O_RDONLY)) > 0)
	{
		while (read(fd, buf, 1))
			ft_putstr(buf);
		close(fd);
	}
	return (0);
}
