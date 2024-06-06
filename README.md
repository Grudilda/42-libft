<p align="center">
  <img src="https://github.com/mcombeau/mcombeau/blob/main/42_badges/libfte.png" />
</p>

42 school's first project, libft, is about learning how the standard functions of C programming work, by coding them from scratch and creating our very own library.
This project is aimed to grow, as we go along the futures projects, with other useful functions.


![Validation](https://badgen.net/static/validation/04.06.2024/green)  ![Grade](https://badgen.net/static/grade/125/4cc9f0)  ![C](https://badgen.net/static/language/C/blue)  ![Makefile](https://badgen.net/static/build/Makefile/4361ee)


## Compilation

To compile the mandatory part :
```
make
```

To compile the bonus part :
```
make bonus
```


## Included Functions

### Mandatory Functions

The mandatory functions of libft are either functions from the standard C library or other useful functions create or modify for the project. They are mostly useful for character, string and memory manipulation. There are 34 mandatory functions which must work as the originals ones in libc or work as ask in the subject to get a grade 100.

Functions to check and manipulate characters:

   - ft_isalpha
   - ft_isdigit
   - ft_isalnum
   - ft_isascii
   - ft_isprint
   - ft_toupper
   - ft_tolower

Functions to manipulate strings:

   - ft_strlen
   - ft_strlcpy
   - ft_strlcat
   - ft_strchr
   - ft_strrchr
   - ft_strncmp
   - ft_strnstr
   - ft_substr
   - ft_strjoin
   - ft_strtrim
   - ft_split
   - ft_strmapi
   - ft_striteri

Functions to manipulate memory:

   - ft_calloc
   - ft_memset
   - ft_bzero
   - ft_memcpy
   - ft_memmove
   - ft_memchr
   - ft_memcmp
   - ft_strdup

Functions for numbers/string conversion:

   - ft_atoi
   - ft_itoa

Functions to write on a specific file descriptor

   - ft_putchar_fd
   - ft_putstr_fd
   - ft_putendl_fd
   - ft_putnbr_fd

### Bonus Functions

The bonus functions deal with linked list manipulation. If all the bonus functions works good, it adds extras 25 points to the final grade.

   - ft_lstnew
   - ft_lstadd_front
   - ft_lstsize
   - ft_lstlast
   - ft_lstadd_back
   - ft_lstdelone
   - ft_lstclear
   - ft_lstiter
   - ft_lstmap
