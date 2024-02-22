/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilefournier <emilefournier@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:39:52 by emilefourni       #+#    #+#             */
/*   Updated: 2024/02/22 12:29:45 by emilefourni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void    inter(char *s1, char *s2)
{
   int used[256] = {0};
   int i = 0;

   while (s1[i])
   {
        used[(int)s1[i]] = 1;
        i++;
   }
   i = 0;
   while (s2[i])
   {
        if (used[(int)s1[i]] == 1)
        {
            write(1, &s1[i], 1);
            used[(int)s1[i]] = 2;
        }
        i++;
   }
}*/

void solve(char *str1, char *str2) 
{
    int i;
    int seen[256] = {0};

    i = 0;
    while(str2[i])
    {
        if (seen[(int)str2[i]] == 0)
            seen[(int)str2[i]] = 1;
        i++;
    }
    i = 0;
    while (str1[i])
    {
        if (seen[(int)str1[i]] == 1)
        {
            write(1, &str1[i], 1);
            seen[(int)str1[i]] = 2;
        }
        i++;
    }

}

int	main(int argc, char **argv) {
	if (argc == 3)
		solve(argv[1], argv[2]);
	write(1, "\n", 1);
	return 0;
}

/*int main(int argc, char *argv[])
{
    if (argc == 3)
        inter(argv[1], argv[2]);
    write(1, "\n", 1);
    return 0;
}*/
