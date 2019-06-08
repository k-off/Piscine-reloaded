/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/07 18:43:26 by pacovali      #+#    #+#                 */
/*   Updated: 2019/01/07 18:55:39 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		ft_putchar('0' + i);
		i++;
	}
}
