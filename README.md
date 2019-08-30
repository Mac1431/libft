# Libft - @WeThinkCode_
My implementation of some of the Standard C Library functions including some additional ones.

### Table of content
* [What is libft?](#what-is-libft)
* [What's in it?](#whats-in-it)
* [How does it work?](#how-does-it-work)
* [How do I use the library?](#how-do-i-use-the-library)
* [Example usage](#example-usage)

### What is libft?
[Libft][1] is an individual project at [WeThinkCode] that requires us to re-create some standard C library functions including some additional ones that can be used later to build a library of useful functions for the rest of the program.

Disclaimer: *Reinventing the wheel is bad, WeThinkCode makes us do this just so we can have a deeper understanding of data structures and basic algorithms. At WeThinkCode we're not allowed to use some standard libraries on our projects, so we have to keep growing this library with our own functions as we go farther in the program.*

### What's in it?

As you can see from the [Project instructions][1], there are 4 sections:

1.  **Libc Functions:** Some of the standard C functions
2.  **Additional functions:** Functions WeThinkCode deems will be useful for later projects
3.  **Bonus Functions:** Functions WeThinkCode deems will be useful for linked list manipulation
4.  **Personal Functions:** Functions I believe will be useful later. [Documented here][3].

Libc functions | Additional functions | Bonus Functions | Personal Functions
:----------- | :-----------: | :-----------: | -----------:
memset		| ft_memalloc	| ft_lstnew		 |ft_isupper  |
bzero		| ft_memdel		| ft_lstdelone	 |ft_islower  |
memcpy		| ft_strnew		| ft_lstdel	|   
memccpy		| ft_strdel		| ft_lstadd	|    
memmove		| ft_strclr		| ft_lstiter|   
memchr		| ft_striter	| ft_lstmap	|
memcmp		| ft_striteri	|
strlen		| ft_strmap		|
strdup		| ft_strmapi	|
strcpy		| ft_strequ		|
strncpy		| ft_strnequ	|
strcat		| ft_strsub		|
strlcat		| ft_strjoin	|
strchr		| ft_strtrim	|
strrchr		| ft_strsplit	|
strstr		| ft_itoa		|
strnstr		| ft_putchar	|
strcmp		| ft_putstr		|
strncmp		| ft_putendl	|
atoi		| ft_putnbr		|
isalpha		| ft_putchar_fd	|
isdigit		| ft_putstr_fd	|
isalnum		| ft_putendl_fd	|
isascii		| ft_putnbr_fd	|
isprint		|				|
toupper		| 				|
tolower		| 				| 


My code is not the best, but it passed all the WeThinkCode tests successfully.

### How does it work?

The goal is to create a library called libft.a from the source files so I can later use that library from other projects at WeThinkCode.

To create that library, after downloading/cloning this project, **cd** into the project, call make:

	git clone https://github.com/R4meau/libft
	cd libft
	make

You should see a *libft.a* file and some object files (.o).


Now to clean up (removing the .o files and the .c files from the root), call `make clean`


### How do I use the library?

I added an example file called **example.c**, it's using the function **ft_putstr** to print "WeThinkCode_ is doing the most!!!" to the screen. 

If you try to compile it with gcc using `gcc example.c` you will get an *undefined symbol* error for ft_putstr. 

You have to include the library when compiling:

`gcc example.c libft.a`

-libft.a is the library created after running `make`

That's it. Now run it using `./a.out`

## Example usage

This is a list of my projects that use Libft extensively:

* [get_next_line](https://github.com/r4meau/get_next_line)
* [ft_ls](https://github.com/r4meau/ft_ls)
* [ft_contrast](https://github.com/R4meau/ft_contrast)
* [minishell](https://github.com/R4meau/minishell)
* [ft_select](https://github.com/R4meau/ft_select)

## Sponsors

<a href="https://app.codesponsor.io/link/Fo4iMpT8bBWXwb54Lj7DPwqL/R4meau/libft" rel="nofollow"><img src="https://app.codesponsor.io/embed/Fo4iMpT8bBWXwb54Lj7DPwqL/R4meau/libft.svg" style="width: 888px; height: 68px;" alt="Sponsor" /></a>

Enjoy.