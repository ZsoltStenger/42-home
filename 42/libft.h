#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
	void	*content;
	struct	s_list	*next;
}	t_list;

typedef struct	s_split_next
{
	size_t	start;
	size_t	length;
}	t_split_next;

int	ft_atoi(const char *str);		//working tho idk if the use of cast is allowed

void	ft_bzero(void *s, size_t n);		//done

void	ft_calloc(size_t count, size_t size);		//done

int	ft_islower(int c);		//done

int	ft_isupper(int c);		//done

int	ft_isalnum(int c);		//done

int	ft_isalpha(int c);		//done

int	ft_isascii(int c);		//switched from || to && , need to check if it's working properly

int	ft_isdigit(int c);		//done

int	ft_isprint(int c);		//switched from || to && , need to check if it's working properly

int ft_tolower(int c);		//done

int ft_toupper(int c);		//done

char	*ft_itoa(int n);

void	*ft_memccpy(void *dst, const void *src, int c, size_t n);		//done

void	*ftmemchr(const void *s, int c, size_t n);		//done

int	ft_memcmp(const void *s1, const void *s2, size_t n);		//done

void	*ft_memcpy(void *dst, const void *src, size_t n);		//done

void	*ft_memmove(void *dst, const void *src, size_t len);		//done

void	*ft_memset(void *b, int c, size_t len);		//done

void	ft_putchar_fd(char c, int fd);		//done

void	ft_putendl_fd(char *s, int fd);		//done

void	ft_putnbr_fd(int n, int fd);

void	ft_putstr_fd(char *s, int fd);		//done

char	**ft_split(char const *s, char c);

char	*ft_strchr(char const *s, int c);		//done

char	*ft_strdup(const char *s1);		//done

char	*ft_strjoin(char const *s1, char const *s2);		//done

size_t	ft_strlcat(char *dst, const char *src, size_t size);		//done

size_t	ft_strlcpy(char *dst, const char *src, size_t size);		//done

size_t	ft_strlen(const char *s);		//done and working

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int	ft_strncmp(const char *s1, const char *s2, size_t n);		//NOT DONE what cmp char is for isn't clear

char	*ft_strstr(const char *haystack, const char *needle);		//working tho idk if the use of cast is allowed

char	*ft_strrchr(const char *s, int c);		//done

char	*ft_strtrim(char const *s1, char const set);		//done

char	*ft_substr(char const *s, unsigned int start, size_t len);		//done

t_list	*ft_lstnew(void *content);

int	ft_lstsize(t_list *lst);

t_list	*ft_lstlast(t_list *lst);

void	ft_lstadd_front(t_list **alst, t_list *new);

void	ft_lstadd_back(t_list **alst, t_list *new);

void	ft_lstdelone(t_list *lst, void (*del)(void*));

void	ft_lstclear(t_list **lst, void (*del)(void*));

void	ft_lstiter(t_list *lst, void (*f)(void*));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*));



//extra functions

int	ft_signs(char *str, int *i);		//for atoi

#endif