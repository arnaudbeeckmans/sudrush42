/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_row_error.c                                         :+:    :+:        */
/*                                                     +:+                    */
/*   By: ccoers <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/07 16:25:41 by ccoers        #+#    #+#                 */
/*   Updated: 2018/10/07 22:55:42 by abeeckma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		ft_row_error_1(int argc)
{
	if (argc != 10)
		return (1);
	return (0);
}

int		ft_row_error_2(char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < 10)
	{
		while (argv[i][j] != '\0')
		{
			if ((argv[i][j] > '9' || argv[i][j] < '1') && argv[i][j] != '.')
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

int		ft_row_error_3(char **argv)
{
	int i;

	i = 1;
	while (i < 10)
	{
		if (ft_strlen(argv[i]) != 9)
			return (1);
		i++;
	}
	return (0);
}

int		ft_row_error_4(char **argv)
{
	int i;
	int j;
	int b;

	i = 1;
	j = 0;
	b = 0;
	while (i < 10)
	{
		while (j < 9)
		{
			while (argv[i][j] != argv[i][b] && b < 9)
				b++;
			if (b == j)
				b++;
			if (argv[i][j] == argv[i][b] && argv[i][b] != '.')
				return (1);
			j++;
			b = 0;
		}
		i++;
		j = 0;
	}
	return (0);
}

int		ft_row_error(int argc, char **argv)
{
	if (ft_row_error_1(argc) == 1 || ft_row_error_2(argv) == 1
		|| ft_row_error_3(argv) == 1 || ft_row_error_4(argv))
	{
		return (1);
	}
	return (0);
}
