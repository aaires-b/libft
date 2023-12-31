/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:11:53 by aaires-b          #+#    #+#             */
/*   Updated: 2023/10/02 13:05:38 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int p)
{
	return (p >= 32 && p <= 126);
}

/*int main()
{
	int p = 47;

	printf("%d", ft_isprint(p));
}*/