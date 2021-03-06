/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theogell <theogell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 17:40:21 by theogell          #+#    #+#             */
/*   Updated: 2018/04/09 21:33:16 by theogell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_tolower(int c)
{
	if (ft_isupper(c))
	{
		c += 32;
		return (c);
	}
	return (c);
}
