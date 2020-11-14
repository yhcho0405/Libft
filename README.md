## Library Function

### **memory**
- [`memset`](./Libft/ft_memset.c)
- [`bzero`](./Libft/ft_bzero.c)
- [`memcpy`](./Libft/ft_memcpy.c)
- [`memccpy`](./Libft/ft_memccpy.c)
- [`memmove`](./Libft/ft_memmove.c)
- [`memchr`](./Libft/ft_memchr.c)
- [`memcmp`](./Libft/ft_memcmp.c)
- [`calloc`](./Libft/ft_calloc.c)
    
### **string**

- [`strlen`](./Libft/ft_strlen.c)
- [`strlcpy`](./Libft/ft_strlcpy.c)
- [`strlcat`](./Libft/ft_strlcat.c)
- [`strchr`](./Libft/ft_strchr.c)
- [`strrchr`](./Libft/ft_strrchr.c)
- [`strnstr`](./Libft/ft_strnstr.c)
- [`strncmp`](./Libft/ft_strncmp.c)
- [`atoi`](./Libft/ft_atoi.c)
- [`strdup`](./Libft/ft_strdup.c)
    
### **is\*, to\***
- [`isalpha`](./Libft/ft_isalpha.c)
- [`isdigit`](./Libft/ft_isdigit.c)
- [`isalnum`](./Libft/ft_isalnum.c)
- [`isascii`](./Libft/ft_isascii.c)
- [`isprint`](./Libft/ft_isprint.c)
- [`toupper`](./Libft/ft_toupper.c)
- [`tolower`](./Libft/ft_tolower.c)

<br>

## Non Library Function

### **string**
- [`ft_substr`](./Libft/ft_substr.c)
    - Allocates (with malloc(3)) and returns a substring from the string ’s’.
    - The substring begins at index ’start’ and is of maximum size ’len’.
- [`ft_strjoin`](./Libft/ft_strjoin.c)
    - Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.
- [`ft_strtrim`](./Libft/ft_strtrim.c)
    - Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.
- [`ft_split`](./Libft/ft_split.c)
    - Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter.
    - The array must be ended by a NULL pointer.
- [`ft_itoa`](./Libft/ft_itoa.c)
    - Allocates (with malloc(3)) and returns a string representing the integer received as an argument.
    - Negative numbers must be handled.
- [`ft_strmapi`](./Libft/ft_strmapi.c)
    - Applies the function ’f’ to each character of the string ’s’ to create a new string (with malloc(3)) resulting from successive applications of ’f’.

### **put\*_fd**
- [`ft_putchar_fd`](./Libft/ft_putchar_fd.c)
    - Outputs the character ’c’ to the given file descriptor.
- [`ft_putstr_fd`](./Libft/ft_putstr_fd.c)
    - Outputs the string ’s’ to the given file descriptor.
- [`ft_putendl_fd`](./Libft/ft_putendl_fd.c)
    - Outputs the string ’s’ to the given file descriptor, followed by a newline.
- [`ft_putnbr_fd`](./Libft/ft_putnbr_fd.c)
    - Outputs the integer ’n’ to the given file descriptor.

### **linked list**

```c
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
```
- [`ft_lstnew`](./Libft/ft_lstnew.c)
    - Allocates (with malloc(3)) and returns a new element.
    - The variable ’content’ is initialized with the value of the parameter ’content’.
    - The variable ’next’ is initialized to NULL.
- [`ft_lstadd_front`](./Libft/ft_lstadd_front.c)
    - Adds the element ’new’ at the beginning of the list.
- [`ft_lstsize`](./Libft/ft_lstsize.c)
    - Counts the number of elements in a list.
- [`ft_lstlast`](./Libft/ft_lstlast.c)
    - Returns the last element of the list.
- [`ft_lstadd_back`](./Libft/ft_lstadd_back.c)
    - Adds the element ’new’ at the end of the list.
- [`ft_lstdelone`](./Libft/ft_lstdelone.c)
    - Takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element.
    - The memory of ’next’ must not be freed.
- [`ft_lstclear`](./Libft/ft_lstclear.c)
    - Deletes and frees the given element and every successor of that element, using the function ’del’ and free(3).
    - Finally, the pointer to the list must be set to NULL.
- [`ft_lstiter`](./Libft/ft_lstiter.c)
    - Iterates the list ’lst’ and applies the function ’f’ to the content of each element.
- [`ft_lstmap`](./Libft/ft_lstmap.c)
    - Iterates the list ’lst’ and applies the function ’f’ to the content of each element.
    - Creates a new list resulting of the successive applications of the function ’f’.
    - The ’del’ function is used to delete the content of an element if needed.


------------------

## Test Result
- [`Libftest`](https://github.com/jtoty/Libftest)
<img src="https://i.imgur.com/9jQ0tDz.png" width="400"/>

- [`libft-unit-test`](https://github.com/alelievr/libft-unit-test)
<img src="https://i.imgur.com/ozVrvUc.png" width="400"/>

- [`libft-war-machine`](https://github.com/ska42/libft-war-machine)
<img src="https://i.imgur.com/sRIh6dR.png" width="400"/>
