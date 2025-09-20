/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdout.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 03:16:23 by marcnava          #+#    #+#             */
/*   Updated: 2025/09/20 23:41:52 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FDOUT_H
# define FT_FDOUT_H

void	ft_putchar_fd(char c, int fd);
void	ft_putchar(char c);
void	ft_putendl_fd(char *s, int fd);
void	ft_putendl(char *s);
void	ft_puterror(char *s);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr(int n);
void	ft_putstr_fd(char *s, int fd);
void	ft_putstr(char *s);

#endif