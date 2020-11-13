### Library Function

- ***memory***
    [`memset`](./Libft/ft_memset.c) [`bzero`](./Libft/ft_bzero.c) [`memcpy`](./Libft/ft_memcpy.c) [`memccpy`](./Libft/ft_memccpy.c) [`memmove`](./Libft/ft_memmove.c) [`memchr`](./Libft/ft_memchr.c) [`memcmp`](./Libft/ft_memcmp.c) [`calloc`](./Libft/ft_calloc.c)
- ***string***
    [`strlen`](./Libft/ft_strlen.c) [`strlcpy`](./Libft/ft_strlcpy.c) [`strlcat`](./Libft/ft_strlcat.c) [`strchr`](./Libft/ft_strchr.c) [`strrchr`](./Libft/ft_strrchr.c) [`strnstr`](./Libft/ft_strnstr.c) [`strncmp`](./Libft/ft_strncmp.c) [`atoi`](./Libft/ft_atoi.c) [`strdup`](./Libft/ft_strdup.c)
- ***is, to***
    [`isalpha`](./Libft/ft_isalpha.c) [`isdigit`](./Libft/ft_isdigit.c) [`isalnum`](./Libft/ft_isalnum.c) [`isascii`](./Libft/ft_isascii.c) [`isprint`](./Libft/ft_isprint.c) [`toupper`](./Libft/ft_toupper.c) [`tolower`](./Libft/ft_tolower.c)
    
    
    
### Non Library Function

- ***string***
    - [`ft_substr`](./Libft/ft_substr.c)
    
|  Prototype |  char \*ft_substr(char const \*s, unsigned int start, size_t len); |
|---|---|
|  Parameters |  #1. The string from which to create the substring. \n#2. The start index of the substring in the string ’s’. \n#3. The maximum length of the substring. |
|  Return value |  The substring. NULL if the allocation fails. |
|  Description |  Allocates (with malloc(3)) and returns a substring from the string ’s’. \nThe substring begins at index ’start’ and is of maximum size ’len’. |

    - [`ft_strjoin`](./Libft/ft_strjoin.c)
    - [`ft_strtrim`](./Libft/ft_strtrim.c)
    - [`ft_split`](./Libft/ft_split.c)
    - [`ft_itoa`](./Libft/ft_itoa.c)
    - [`ft_strmapi`](./Libft/ft_strmapi.c
- ***put_fd***
    - [`ft_putchar_fd`](./Libft/ft_putchar_fd.c)
    - [`ft_putstr_fd`](./Libft/ft_putstr_fd.c)
    - [`ft_putendl_fd`](./Libft/ft_putendl_fd.c)
    - [`ft_putnbr_fd`](./Libft/ft_putnbr_fd.c)
- ***linked list**
    - [`ft_lstnew`](./Libft/ft_lstnew.c)
    - [`ft_lstadd_front`](./Libft/ft_lstadd_front.c)
    - [`ft_lstsize`](./Libft/ft_lstsize.c)
    - [`ft_lstlast`](./Libft/ft_lstlast.c)
    - [`ft_lstadd_back`](./Libft/ft_lstadd_back.c)
    - [`ft_lstdelone`](./Libft/ft_lstdelone.c)
    - [`ft_lstclear`](./Libft/ft_lstclear.c)
    - [`ft_lstiter`](./Libft/ft_lstiter.c)
    - [`ft_lstmap`](./Libft/ft_lstmap.c)

