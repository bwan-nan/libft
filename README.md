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

Disclaimer: *Reinventing the wheel is not something we do for fun. 42 makes us do this just so we can have a deeper understanding of data structures and basic algorithms. At 42 we're not allowed to use standard libraries on our projects, so we have to keep growing this library with our own functions as we go further in the curriculum.*

### What's in it?

I separated my lib into 6 different categories::

4.  **Strings Functions:** All functions manipulating characters and strings
2.  **Conversion functions:** Functions useful to convert numbers to strings or strings to numbers
3.  **Lists Functions:** All functions manipulating lists
4.  **Memory Functions:** Functions related to memory allocation/use/comparison
4.  **Output Functions:** Functions to display/output on the terminal
1.  **Binary Functions:** Some functions manipulating numbers in binary
1.  **Other Functions:** A few functions that don't fit in any category yet

Strings Functions   | Conversion Functions |  Lists Functions  | Memory Functions | Output Functions | Other Functions   |
:-----------------: | :------------------: | :---------------: | :--------------: | :--------------: | :---------------: |
count_occurence	    | ft_atoi	 	   | ft_islist_sorted  | ft_bzero	  | ft_printf	     | ft_max            |
ft_isalnum	    | ft_binatoi	   | ft_lstclr	       | ft_memcpy        | ft_putchar	     | ft_power          |
ft_isalpha	    | ft_itoa		   | ft_lstdelone      | ft_memccpy       | ft_putendl	     | ft_recursive_power|
ft_isdigit	    | ft_itoa_base	   | ft_lstnew	       | ft_memcmp        | ft_putnbr	     | ft_show_tab       |
ft_isinteger	    | ft_llitoa		   | ft_lstrevrotate   | ft_memdel        | ft_putstr_fd     | ft_sqrt		 |
ft_islower	    | ft_ullitoa 	   | ft_lst_bubblesort | ft_memset        | ft_putnbrendl    | get_next_line	 |
ft_isupper	    | ft_llitoa_base	   | ft_lstcount       | ft_memalloc      | ft_putchar_fd    | sort_int_tab	 |
ft_isnumeric	    | ft_ullitoa_base      | ft_lstiter	       | ft_memchr        | ft_putendl_fd    |
ft_isprint	    | ft_atoull		   | ft_lstprepend     | ft_memmove       | ft_putnbr_f	     |
ft_isupper	    |			   | ft_lstrotate      | ft_realloc       | ft_putstr	     |
ft_iswhitespace	    |			   | ft_lst_mergesort  |		  |		     |
ft_split_whitespace |			   | ft_lstcpy	       |		  |		     |
ft_str_notchr	    |			   | ft_lstmap	       |		  |		     |
ft_str_notchr_index |			   | ft_lstpush	       |		  |		     |
ft_strcat   	    |		  	   | ft_lstswap	       |	          |		     |
ft_strchr	    |	                   | ft_lstappend      |	          |		     |
ft_strclr	    |		  	   | ft_lstdel	       |	          |		     |
ft_strcmp	    |			   | ft_lstncpy	       |	          |		     |
ft_strcpy	    |			   | ft_lstrev	       |	          |		     |
ft_strdel	    |		 	   |		       |	          |		     |
ft_strdup	    |			   |		       |	          |		     |
ft_strequ	    |			   |		       |	          |		     |
ft_striter	    |			   |		       |	          |		     |
ft_striteri	    |			   |		       |	          |		     |
ft_strjoin	    |			   |		       |	          |		     |
ft_strlcat	    |			   |		       |	          |		     |
ft_strlen	    |			   |		       |	          |		     |
ft_strmap	    |			   |		       |	          |		     |
ft_strmapi	    |			   |		       |	          |	 	     |
ft_strncat	    |			   |		       |	          |		     |
ft_strncmp	    |			   |		       |                  |		     |
ft_strncpy	    |			   |		       |	          |		     |
ft_strnequ	    |			   |		       |  	          |		     |
ft_strnew	    |			   |		       |  	          |		     |
ft_strnstr	    |			   |		       |	          |		     |
ft_strr_notchr_index|			   |		       |	          |		     |
ft_strrchr	    |			   |		       |	          |		     |
ft_strsplit	    |			   |		       |	          |		     |
ft_strstr  	    |			   |		       |	          |		     |
ft_strstr_delim     |			   |		       |	          |		     |
ft_strsub	    |			   |		       |	          |		     |
ft_strtolower       |			   |		       |	          |		     |
ft_strtoupper	    |			   |		       |	          |		     |
ft_strtrim	    |			   |		       |	          |		     |
ft_tolower	    |			   |		       |	          |		     |
ft_toupper	    |			   |		       |	          |		     |
variadic_strjoin    |			   |		       |	          |		     |

Notes:

- Most of the the files and function names are namespaced with an **ft** in front. It stands for Fourty Two
- The project instructions require that we put all the source files in the root directory but for more conveniency, I separate them into sub folders.
- I update this list every now and then with new personal functions. If you don't know what a function does, refer to the man or just test it (or ask me).

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
