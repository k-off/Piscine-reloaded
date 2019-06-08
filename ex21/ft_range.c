/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/08 17:53:09 by pacovali      #+#    #+#                 */
/*   Updated: 2019/01/09 19:50:20 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int len;
	int *range;
	int i;

	i = 0;
	if (max <= min)
		return (NULL);
	len = max - min;
	range = (int*)malloc(sizeof(*range) * (len + 1));
	while (i < len)
	{
		range[i] = min;
		min++;
		i++;
	}
	range[len] = (int)NULL;
	return (range);
}
