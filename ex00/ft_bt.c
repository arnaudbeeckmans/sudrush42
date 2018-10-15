/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bt.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-eng <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/07 20:27:21 by mvan-eng      #+#    #+#                 */
/*   Updated: 2018/10/07 23:38:38 by mvan-eng      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		ft_bt(int i, int j, char **argv)
{
	int		skip;
	int		x;
	int		y;
	char	chr[9][9];

	skip = 0;
	if (argv[i][j] != '.')
	{
		x = i;
		y = j;
		j++;
	}
	if (argv[i][j] == chr[i][j])
	{
		while (j > 0)
			j--;
		i--;
		j = 8;
	}
	return (0);
}
