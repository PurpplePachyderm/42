/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilefournier <emilefournier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:45:15 by emilefourni       #+#    #+#             */
/*   Updated: 2024/02/22 12:45:26 by emilefourni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
   int i = 8;
   unsigned char bit;

   while (i--)
   {
        bit = (octet >> i & 1) + 48;
        write(1, &bit, 1);
   }
}

int main()
{
    print_bits(128);
    return 0;
}
