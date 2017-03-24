/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbechet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/24 11:43:35 by chbechet          #+#    #+#             */
/*   Updated: 2017/03/24 11:43:37 by chbechet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

/*
** ======= STRUCT =======
*/

typedef enum		e_bool
{
	FALSE,
	TRUE
}					t_bool;

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

/*
** ======= SHOWING =======
*/

void				ft_putstr(char const *str);
void				ft_putstr_fd(char const *str, int fd);
void				ft_putendl(char const *str);
void				ft_putendl_fd(char const *str, int fd);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putnbr(int nb);
void				ft_putnbr_fd(int nb, int fd);
void				ft_is_negative(int n);
void				ft_tab_number(int **tab, int l, int c);

/*
** ======== MEMORY =======
*/

void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memchr(const void *str, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t len);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);

/*
** ======= STRING ========
*/

void				ft_bzero(void *str, size_t n);
void				ft_strclr(char *str);
void				ft_striter(char *str, void (*f) (char *));
void				ft_striteri(char *str, void (*f) (unsigned int, char *));
size_t				ft_strlcat(char *dest, const char *src, size_t size);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *str, int c);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t len);
char				*ft_strdup(const char *src);
char				*ft_strstr(const char *big, const char *little);
char				*ft_strnstr(const char *big, const char *little,
		size_t len);
char				*ft_strmap(char const *str, char (*f) (char));
char				*ft_strmapi(char const *str, char (*f) (unsigned int,
			char));
char				*ft_strsub(char const *str, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s);
char				*ft_strtrim(char const *str);
char				**ft_strsplit(char const *str, char c);

/*
** ======= COMPARE =======
*/

int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_isascii(int c);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isprint(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);

/*
** ======== CONVERT =========
*/

char				*ft_itoa(int n);
int					ft_atoi(const char *str);
void				ft_foreach(int *tab, int lenght, void (*f)(int));
void				ft_swap(int *a, int *b);
char				*ft_strnew(size_t size);
char				*ft_strdel(char **as);

/*
** ======= LIST =======
*/

void				ft_lstdelone(t_list **alst, void (*del) (void *, size_t));
void				ft_lstdel(t_list **alst, void (*del) (void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f) (t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

/*
** ======= CALCULS ======
*/

int					ft_sqrt(int nb);
size_t				ft_strlen(const char *str);

/*
** ======= SORT ======
*/

int					*ft_range(int min, int max);

#endif
