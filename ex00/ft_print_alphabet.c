/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusiband <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 11:06:37 by lusiband          #+#    #+#             */
/*   Updated: 2020/07/09 14:22:07 by lusiband         ###   ########.fr       */
/*                                                                            */
/*****************************************************************************/


#include<unistd.h>
 

 
 void    ft_print_alphabet()
{
        char letter;
        
        letter ='a';
        while (letter <= 'z')
 {
        ft_putchar(letter);
        letter++;
        
 }

   
} 



