/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/07 20:49:05 by pacovali      #+#    #+#                 */
/*   Updated: 2019/01/09 19:18:25 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;

	i = nb;
	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	while (i > 1)
	{
		i--;
		nb *= i;
	}
	return (nb);
}
