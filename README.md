# Libft

### 42 - Implementing our own Library in C

My implementation of some of the Standard C Library functions including some additional ones.

### Table Of Contents
* [What is libft?](#what-is-libft)
* [What's in it?](#whats-in-it)
* [How does it work?](#how-does-it-work)
* [Usage](#usage-example)

### What is libft?
Libft [(see PDF)][1] is an individual project at 42 that requires us to re-create some standard C library functions including some additional ones that can be used later to build a library of useful functions for the rest of the curriculum.

Disclaimer: *Reinventing the wheel is not something we do for fun. 42 makes us do this just so we can have a deeper understanding of data structures and basic algorithms. At 42 we're not allowed to use some standard libraries on our projects, so we have to keep growing this library with our own functions as we go further in the curriculum.*

### What's in it?

As you can see from the [Project instructions][1], there are 4 sections:

1.  **Libc Functions:** Some of the standard C functions
2.  **Additional functions:** Functions 42 deems will be useful for later projects
3.  **Bonus Functions:** Functions 42 deems will be useful for linked list manipulation
4.  **Personal Functions:** Functions I believe will be useful later.

Libc functions | Additional functions | Bonus Functions | Personal Functions
:----------- | :-----------: | :-----------: | -----------:
memset		   | ft_memalloc	 | ft_lstnew		 | ft_islower 
bzero		     | ft_memdel		 | ft_lstdelone	 | ft_upper 
memcpy		   | ft_strnew		 | ft_lstdel		 | ft_iswhitespace    
memccpy		   | ft_strdel		 | ft_lstadd		 | ft_putnbrendl    
memmove		   | ft_strclr		 | ft_lstiter	   | ft_itoa_base    
memchr		   | ft_striter	   | ft_lstmap		 | ft_split_whitespaces
memcmp	   	 | ft_striteri	 |				       | ft_show_tab
strlen		   | ft_strmap		 |				       | get_next_line
strdup		   | ft_strmapi	   |				       | sort_int_tab 
strcpy		   | ft_strequ		 |			       	 | ft_lst_bubblesort
strncpy		   | ft_strnequ	   |			         | ft_lst_mergesort
strcat		   | ft_strsub		 |               | ft_lstrev 
strlcat		   | ft_strjoin	   |               | ft_count_occurence 
strchr		   | ft_strtrim	   |               | ft_strchr_index
strrchr	     | ft_strsplit   |               | ft_str_notchr_index
strstr		   | ft_itoa		   |               | ft_strr_notchr_index
strnstr		   | ft_putchar	   |               | ft_binatoi
strcmp		   | ft_putstr		 |               | ft_llitoa
strncmp		   | ft_putendl	   |               | ft_llitoa_base
atoi		     | ft_putnbr		 |               | ft_ullitoa
isalpha		   | ft_putchar_fd |               | ft_ullitoa_base
isdigit		   | ft_putstr_fd	 |               | get_bits
isalnum		   | ft_putendl_fd |               | ft_max
isascii	     | ft_putnbr_fd	 |               | ft_recursive_power
isprint		   | ft_realloc      |               | ft_printf
toupper		   | ft_strtolower |               | 
tolower		   | ft_strtoupper |               |
			   |			   |				| 

Notes:

- Most of the the files and function names are namespaced with an **ft** in front. It stands for Fourty Two
- The project instructions require that we put all the source files in the root directory but for more conveniency, I separate them into sub folders.
- I update this list every now and then with new personal functions. If you don't know what a function does, refer to the man or just test it (or ask me).

My code is not the best, but it passed all the 42 tests successfully.

### How does it work?

The goal is to create a library called libft.a from the source files so we can later use that library from other projects at 42.

To create that library, after downloading/cloning this project, **cd** into the project, copy all the files from the sub folders to the root directory and finally, call make:

	git clone https://github.com/bwan-nan/libft
	cd libft
	make

You should see a *libft.a* file and some object files (.o).

    make clean

From there, you can basically call any of the functions present in my libft in another program.

### Usage example 

Here's a basic example:
If you create a file named **example.c** and write the following code:

	#include "libft.h"
	
	int main(void)
	{
		ft_putstr("Hello world\n");
		return (0);
	}

You can then compile it with **libft.a** using this command:

	clang -Wall -Werror -Wextra example.c libft.a -I inc -o example

Finally, running **./example | cat -e** should display:
	
	Hello world$

## Concrete usage

This is a list of my projects that use Libft extensively:

* [get_next_line](https://github.com/bwan-nan/get_next_line)
* [Fillit](https://github.com/bwan-nan/Fillit)



[1]: https://github.com/bwan-nan/libft/blob/master/libft.en.pdf "Libft PDF"
