/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-eng <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/07 23:23:27 by mvan-eng      #+#    #+#                 */
/*   Updated: 2018/10/07 23:39:02 by mvan-eng      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_putnbr(int i, int j, char **argv)
{
	char nb;

	nb = '1';
	if (argv[i][j] == '.')
	{
		nb = '1';
	}
	else if (argv[i][j] != '.')
	{
		nb = argv[i][j];
		nb = nb + 1;
	}
	argv[i][j] = nb;
	return (0);
}
