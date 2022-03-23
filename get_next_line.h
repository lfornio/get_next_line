#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h> 

int		get_next_line(int fd, char **line);
size_t	ft_strlen(const char *str);
char	*ft_strjoin_free(char *s1, char *s2);
char	*ft_strnew(size_t size);
char	*ft_strdup(const char *src);
int		new_str(char *s);

#endif
