/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilefournier <emilefournier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:39:06 by emilefourni       #+#    #+#             */
/*   Updated: 2024/02/22 13:32:52 by emilefourni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
   int i = 8;
   unsigned char res = 0;

   while (i > 0)
   {
        res = res * 2 + (octet % 2);
        octet /= 2;
        i--;
   }
   return (res);
}
#include <stdio.h>

int main() {
    unsigned char input = 0b00110101; // Example input value
    unsigned char result = reverse_bits(input);
    
    printf("Input: 0x%02X\n", input);
    printf("Output: 0x%02X\n", result);
    
    return 0;
}