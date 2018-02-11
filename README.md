# libft 42

 The task is to recreate various standard C
library functions, as well as extra things which might be useful, like linked
lists for example.

## Compiling
You may compile `libft.a` by running `make`.

## Usage
Include it in your C project:
```c
#include "libft.h"
```

## Functions
```c
memset	void	      *ft_memset( void * memptr, int val, size_t num )	
bzero	void         ft_bzero (void *b,size_t len)	
memcpy            	ft_memcpy( void *dst, const void *src, size_t num )	
memccpy	void       *ft_memccpy(void *s1, const void *s2, int c, size_t n)	
memmove	void       *ft_memmove(void *s1, const void *s2, size_t n)	
memchr	void        *ft_memchr(void *memptr, int val, size_t num );	
memcmp	int       		ft_memcmp(const void *buf1, const void *buf2, size_t n);	
strlen	size_t      ft_strlen (const char *str)	
strdup	            *ft_strdup(const char *str1)	
strcpy	 char       *ft_strcpy(char *dest, const char *source)	
strncpy	char       *ft_strncpy (char *dst, const char *src, size_t len)	
strcat	char        *ft_strcat ( char *dst, const char *src );	
strncat		
strlcat	size_t	    ft_strlcat(char *dst, const char *src, size_t size)
strchr	char        *ft_strchr(const char *str, int symbol);	
strrchr	char       *ft_strrchr(char *str, int symbol);	
strstr	char	       *ft_strstr(const char *str1, const char *str2);
strnstr	char	      *ft_strnstr(const char *str1, const char *str2, size_t len);
strcmp	int         ft_strcmp(const char *s1, const char *s2);	
strncmp	int        ft_strncmp(const char *s1, const char *s2, size_t num);	
atoi	int           ft_atoi(const char *str);	
isalpha	int        ft_isalpha(int chart);	
isdigit	int        ft_isdigit(int chart);	
isalnum	int        ft_isalnum(int c);	
isascii	int        ft_isascii(int c);	
isprint	int        ft_isprint(int c);	
toupper	int        ft_toupper(int c);	
tolower	int        ft_tolower(int c);	
ft_memalloc	void 	 *ft_memalloc(size_t size);	
ft_memdel	void	    ft_memdel(void **ap);	
ft_strnew	char 	   *ft_strnew(size_t size);	
ft_strdel	void     ft_strdel(char **as);	
ft_strclr	void     ft_strclr(char *s);	
ft_striter	void				ft_striter(char *s, void (*f)(char *));	
ft_striteri	void			ft_striteri(char *s, void (*f)(unsigned int, char *));	
ft_strmap	char					*ft_strmap(char const *s, char (*f)(char));	
ft_strmapi	char				*ft_strmapi(char const *s,		char (*f)(unsigned int, char));	
ft_strequ	int						ft_strequ(char const *s1, char const *s2);	
ft_strnequ	int					ft_strnequ(char const *s1, char const *s2,		size_t n);	
ft_strsub	char     *ft_strsub(char const *s, unsigned int start,   size_t len);	
ft_strjoin	char    *ft_strjoin(char const *s1, char const *s2);	
ft_strtrim	char				*ft_strtrim(char const *s);	
ft_strsplit	char			**ft_strsplit(char const *s, char c);	
ft_itoa	char					  *ft_itoa(int n);	
ft_putchar	void				ft_putchar(char c);	
ft_putstr	void					ft_putstr(char const *s);	
ft_putendl	void				ft_putendl(char const *s);	
ft_putnbr	void					ft_putnbr(int n);	
ft_putchar_fd	void	ft_putchar_fd(char c, int fd);	
ft_putstr_fd	void		ft_putstr_fd(char const *s, int fd);	
ft_putendl_fd	void	ft_putendl_fd(char const *s, int fd);	
ft_putnbr_fd	void		ft_putnbr_fd(int n, int fd);	
ft_nbrlen	size_t			ft_nbrlen(int n);	
void				           *ft_realloc(void *ptr, size_t size);		
size_t             ft_replase_sumbol(char *str, char rep_sumbol, char core_sumbol, size_t n)		
void					          ft_ls_add_n(t_list **new, t_list **lst, size_t n);		
void               ft_ls_add_nval(void const *content,size_t content_size, t_list **lst, size_t n);		
void				          	ft_ls_add_p(t_list **new, t_list **lst);		
void			         		 ft_ls_add_pval(void const *content,		size_t content_size, t_list **lst);		
void				          	ft_ls_add_t(t_list **new, t_list **lst);		
void				          	ft_ls_add_tval(void const *content,		size_t content_size, t_list **lst);		
unsigned int			    ft_ls_count(t_list *lst);		
void				          	ft_ls_del_all(t_list **lst);		
void				          	ft_ls_del_n(t_list **lst, size_t n);		
void				          	ft_ls_del_p(t_list **lst);		
void			          		ft_ls_del_t(t_list **lst);		
int			          			ft_ls_empty(t_list *lst);		
t_list			        		*ft_ls_get_p(t_list *lst)		
t_list	       				*ft_ls_get_t(t_list *lst)		
t_list       					*ft_ls_get_t(t_list *lst);		
t_list       					*ft_ls_pull_p(t_list **lst);		
t_list	       				*ft_ls_pull_t(t_list **lst);		
```
