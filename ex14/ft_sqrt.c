/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/07 21:09:25 by pacovali      #+#    #+#                 */
/*   Updated: 2019/01/07 21:42:10 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_ft_sqrt(int i, int nb)
{
	if (i * i < nb)
		return (1 * ft_ft_sqrt(i + 1, nb));
	else if (i * i == nb)
		return (i);
	return (0);
}

int	ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb > 0)
	{
		i = ft_ft_sqrt(i, nb);
		return (i);
	}
	else
		return (0);
}
