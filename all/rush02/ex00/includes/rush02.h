/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ande-sou <ande-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 13:08:02 by gpatrici          #+#    #+#             */
/*   Updated: 2025/08/20 13:56:15 by ande-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H

# define RUSH02_H

# define BUF_SIZE 1024
# define DICT_DIR "dict/numbers.dict"

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char	***get_dict(char *dict);
void	ft_putstr(char *str);
int		buf_scan(char *buf);
int		ft_strlen(char *str);
int		get_dict_size(char *dict);
void	print_dict(char ***dict);
char	**parse_num(char *num, int len);
void	num_print(char ***dict, char **nums);
int		ft_strcmp(char *s1, char *s2);
char	*find_num(char num, char ***dict);
char	*find_hundred(char ***dict);
char	*find_dozen(char num, char ***dict);
char	*find_teens(char *num, char ***dict);
void	print_thousands(int i, char **nums, char ***dict);
int		str_is_numeric(char *str);
int		full_validity_check(char *dict_dir, int arg_count, char **arg_value);
void	free_dict(char ***dict);
void	free_nums(char **nums);
int		valid_new_dict(char **arg_value, int i, int j, int diff);

#endif
