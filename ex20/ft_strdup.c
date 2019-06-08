/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/08 17:31:57 by pacovali      #+#    #+#                 */
/*   Updated: 2019/01/08 17:50:31 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(src);
	dup = (char*)malloc(sizeof(*dup) * (len + 1));
	while (i < len + 1)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i + 1] = '\0';
	return (dup);
}
