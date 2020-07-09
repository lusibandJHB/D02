/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusiband <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 10:01:19 by lusiband          #+#    #+#             */
/*   Updated: 2020/07/09 14:25:10 by lusiband         ###   ########.fr       */
/*                                                                            */
/* ****************************************************************************/

#include <unistd.h>
#include <stdio.h>


	  

void ft_print_reverse_alphabet(void)
{
	char	letter;
	
	letter='z';
	while (letter > 'a')
	{
			ft_putchar(letter);
			letter--;
	}
}

