include <unistd.h>

int	inter(char *str, char c, int len)
{
	int	i = 0;

	while (str[i] && (i < len || len == -1))
		if (str[i++] == c)
			return (1);
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			if (!inter(argv[1], argv[1][i], i) && inter(argv[2], argv[1][i], -1))
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

// #include <unistd.h>

// int is_char_present(char *str, char c)
// {
//     while (*str)
// 	{
//         if (*str == c)
//             return 1;
//         str++;
//     }
//     return 0;
// }

// void display_common_characters(char *str1, char *str2)
// {
//     int seen[256] = {0}; // assuming ASCII characters

//     while (*str1)
// 	{
//         if (is_char_present(str2, *str1) && !seen[*str1])
// 		{
//             write(1, str1, 1);
//             seen[*str1] = 1;
//         }
//         str1++;
//     }
//     write(1, "\n", 1);
// }

// int main(int argc, char *argv[])
// {
//     if (argc != 3)
// 	{
//         write(1, "\n", 1);
//         return 0;
//     }
//     display_common_characters(argv[1], argv[2]);
//     return 0;
// }
