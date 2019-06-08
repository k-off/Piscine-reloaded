/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_params.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/08 08:56:23 by pacovali      #+#    #+#                 */
/*   Updated: 2019/01/09 18:11:17 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int diff;

	i = 0;
	diff = 0;
	while (!((s1[i] == '\0' && s2[i] == '\0') || diff != 0))
	{
		diff = s1[i] - s2[i];
		i++;
	}
	return (diff);
}

void	ft_pullback(int pos, char **argv)
{
	char	*min;

	while (pos > 0)
	{
		if (ft_strcmp(argv[pos + 1], argv[pos]) < 0)
		{
			min = argv[pos + 1];
			argv[pos + 1] = argv[pos];
			argv[pos] = min;
		}
		pos--;
	}
}

int		main(int argc, char **argv)
{
	char	*min;
	int		i;

	i = 1;
	if (argc > 1)
	{
		min = argv[1];
		while (i < argc - 1)
		{
			ft_pullback(i, argv);
			i++;
		}
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
