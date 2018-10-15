/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sudoku.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-eng <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/07 13:42:52 by mvan-eng      #+#    #+#                 */
/*   Updated: 2018/10/07 23:35:34 by mvan-eng      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_row_error(int argc, char **argv);
int		ft_column_error(char **argv);
int		ft_bt(int i, int j, char **argv);
int		ft_putnbr(int i, int j, char **argv);

#endif
