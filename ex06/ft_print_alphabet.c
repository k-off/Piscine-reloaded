/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_alphabet.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/07 17:50:33 by pacovali      #+#    #+#                 */
/*   Updated: 2019/01/07 18:39:07 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int		i;
	char	c;

	i = 0;
	while (i < 26)
	{
		c = 'a' + i;
		ft_putchar(c);
		i = i + 1;
	}
}
