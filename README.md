## Library Function

### **memory**
- [`memset`](./Libft/ft_memset.c)
    - Writes len bytes of value c (converted to an unsigned char) to the string b.
- [`bzero`](./Libft/ft_bzero.c)
    - Writes n zeroed bytes to the string s.
    - If n is zero, bzero() does nothing.
- [`memcpy`](./Libft/ft_memcpy.c)
    - Copies n bytes from memory area src to memory area dst.
    - If dst and src overlap, behavior is undefined.  Applications in which dst and src might overlap should use memmove(3) instead.
- [`memccpy`](./Libft/ft_memccpy.c)
    - Copies bytes from string src to string dst.
    - If the character c (as converted to an unsigned char) occurs in the string src, the copy stops and a pointer to the byte after the copy of c in the string dst is returned.     - Otherwise, n bytes are copied, and a NULL pointer is returned.
- [`memmove`](./Libft/ft_memmove.c)
    - Copies len bytes from string src to string dst.  The two strings may overlap; the copy is always done in a non-destructive manner.
- [`memchr`](./Libft/ft_memchr.c)
    - Locates the first occurrence of c (converted to an unsigned char) in string s.
- [`memcmp`](./Libft/ft_memcmp.c)
    - Compares byte string s1 against byte string s2.  Both strings are assumed to be n bytes long.
- [`calloc`](./Libft/ft_calloc.c)
    - Contiguously allocates enough space for count objects that are size bytes of memory each and returns a pointer to
     the allocated memory.
     - The allocated memory is filled with bytes of value zero.
    
### **string**

- [`strlen`](./Libft/ft_strlen.c)
    - Computes the length of the string s.
- [`strlcpy`](./Libft/ft_strlcpy.c)
    - Take the full size of the destination buffer and guarantee NUL-termination if there is room.
    - Note that room for the NUL should be included in dstsize.
    - Copies up to dstsize - 1 characters from the string src to dst, NUL-terminating the result if dstsize is not 0.
- [`strlcat`](./Libft/ft_strlcat.c)
    - Appends string src to the end of dst.
    - It will append at most dstsize - strlen(dst) - 1 characters.
    - It will then NUL-terminate, unless dstsize is 0 or the original dst string was longer than dstsize (in practice this should not happen as it means that either
     dstsize is incorrect or that dst is not a proper string).
- [`strchr`](./Libft/ft_strchr.c)
    - Locates the first occurrence of c (converted to a char) in the string pointed to by s.
    - The terminating null character is considered to be part of the string;
    - therefore if c is '\0', the functions locate the terminating '\0'.
- [`strrchr`](./Libft/ft_strrchr.c)
    - The strrchr() function is identical to strchr(), except it locates the last occurrence of c.
- [`strnstr`](./Libft/ft_strnstr.c)
    - Locates the first occurrence of the null-terminated string needle in the string haystack, where not more than len
     characters are searched.
     - Characters that appear after a '\0' character are not searched.
     - Since the strnstr() function is a FreeBSD specific API, it should only be used when portability is not a concern.
- [`strncmp`](./Libft/ft_strncmp.c)
    - Compares not more than n characters.
    - Because strncmp() is designed for comparing strings rather than binary data, characters that appear after a '\0' character are not compared.
- [`atoi`](./Libft/ft_atoi.c)
    - Converts the initial portion of the string pointed to by str to int representation.
- [`strdup`](./Libft/ft_strdup.c)
    - Allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it.
    - The pointer may subsequently be used as an argument to the function free(3).
    
### **is\*, to\***
- [`isalpha`](./Libft/ft_isalpha.c)
    - Tests for any character for which isupper(3) or islower(3) is true.
    - The value of the argument must be representable as an unsigned char or the value of EOF.
- [`isdigit`](./Libft/ft_isdigit.c)
    - Tests for a decimal digit character.
- [`isalnum`](./Libft/ft_isalnum.c)
    - Tests for any character for which isalpha(3) or isdigit(3) is true.
    - The value of the argument must be representable as an unsigned char or the value of EOF.
- [`isascii`](./Libft/ft_isascii.c)
    - Tests for an ASCII character, which is any character between 0 and octal 0177 inclusive.
- [`isprint`](./Libft/ft_isprint.c)
    - Tests for any printing character, including space (' ').
    - The value of the argument must be representable as an unsigned char or the value of EOF.
- [`toupper`](./Libft/ft_toupper.c)
    - Converts a lower-case letter to the corresponding upper-case letter.
    - The argument must be representable as an unsigned char or the value of EOF.
- [`tolower`](./Libft/ft_tolower.c)
    - Converts an upper-case letter to the corresponding lower-case letter.
    - The argument must be representable as an unsigned char or the value of EOF.


> Description Source [Linux man page]

<br>

## Non-Library Function

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

<br>

### **put\*_fd**
- [`ft_putchar_fd`](./Libft/ft_putchar_fd.c)
    - Outputs the character ’c’ to the given file descriptor.
- [`ft_putstr_fd`](./Libft/ft_putstr_fd.c)
    - Outputs the string ’s’ to the given file descriptor.
- [`ft_putendl_fd`](./Libft/ft_putendl_fd.c)
    - Outputs the string ’s’ to the given file descriptor, followed by a newline.
- [`ft_putnbr_fd`](./Libft/ft_putnbr_fd.c)
    - Outputs the integer ’n’ to the given file descriptor.

<br>

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


<br>

## Test Result
- [`Libftest`](https://github.com/jtoty/Libftest)
<img src="https://i.imgur.com/9jQ0tDz.png" width="400"/>

- [`libft-unit-test`](https://github.com/alelievr/libft-unit-test)
<img src="https://i.imgur.com/ozVrvUc.png" width="400"/>

- [`libft-war-machine`](https://github.com/ska42/libft-war-machine)
<img src="https://i.imgur.com/sRIh6dR.png" width="400"/>
