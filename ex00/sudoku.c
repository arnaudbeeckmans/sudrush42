/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sudoku.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-eng <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/07 12:27:04 by mvan-eng      #+#    #+#                 */
/*   Updated: 2018/10/07 23:35:48 by mvan-eng      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	ft_chr(int i, int j, char **argv)
{
	char chr[9][9];

	while (i <= 9)
	{
		while (j <= 8)
		{
			if (argv[i][j] != '.')
			{
				chr[i][j] = 1;
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	if (ft_row_error(argc, argv) == 1 || ft_column_error(argv) == 1)
		ft_putstr("Error\n");
	ft_chr(i, j, argv);
	ft_putnbr(i, j, argv);
	while (ft_row_error(argc, argv) == 1 || ft_column_error(argv) == 1)
	{
		ft_bt(i, j, argv);
	}
	return (0);
}
