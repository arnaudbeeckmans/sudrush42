/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_column_error.c                                     :+:    :+:         */
/*                                                     +:+                    */
/*   By: ccoers <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/07 20:27:16 by ccoers        #+#    #+#                 */
/*   Updated: 2018/10/07 23:33:52 by mvan-eng      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		ft_column_error_4(char **argv)
{
	int i;
	int j;
	int b;

	i = 1;
	j = 0;
	b = 1;
	while (j < 9)
	{
		while (i < 10)
		{
			while (argv[i][j] != argv[b][j] && b < 9)
				b++;
			if (b == i && b < 9)
				b++;
			if (argv[i][j] == argv[b][j] && argv[b][j] != '.')
				return (1);
			i++;
			b = 0;
		}
		j++;
		i = 1;
	}
	return (0);
}

int		ft_column_error(char **argv)
{
	if (ft_column_error_4(argv) == 1)
	{
		return (1);
	}
	return (0);
}
