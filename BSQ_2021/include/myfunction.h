/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myfunction.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 02:26:10 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/25 02:26:12 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYFUNCTION_H
# define MYFUNCTION_H

int			ft_min(int a, int b, int c);
int			cmp(int a, int b);
void		change_square(t_square *square, int x, int y, int len);
int			check_square(int **arr, int i, int j);
int			**make_arr(t_map *map);
void		freedom_map(t_map *map, int size);
int			help_map_info(t_map *map, char *info);
char		*read_line(int fd);
void		mod_map(t_map *map, t_square *square);
void		print(t_map *map, t_square *square);
t_map		*read_stdin(void);
t_map		*read_map(int fd, int stdin);
t_map		*read_file(char *file);
t_square	*find_bsq(t_map *map);
void		bsq(char *file);
int			main(int argc, char *argv[]);
char		*expand_size(char *src, int *size);
int			ft_is_number(char c);
int			ft_atoi(char *str);
int			ft_is_valid_map(char *line, t_map *map);
int			is_printable(char c);
int			parse_map_info_sub(t_map *map, char *info);
char		*free_line(char *line);
int			read_map_sub(int *idx, t_map *map, char *line);

#endif
