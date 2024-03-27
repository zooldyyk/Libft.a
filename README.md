# 42 Lausanne - Libft - Your Own Standard C Library

This repository contains the implementation of the Libft library, created as part of my 42 school curriculum. The Libft library consists of a collection of functions re-implemented from the standard C library, as well as additional utility functions that are reusable throughout the course.

## Concept

The concept behind Libft is to provide a set of fundamental functions commonly used in programming tasks. These functions serve as building blocks for more complex programs and provide a deeper understanding of how standard library functions are implemented.

## Libft Functions

| Function | Prototype | Definition |
|----------|-----------|------------|
| ft_isalpha | int ft_isalpha(int c); | Tests for any character for which a-z or A-Z is true |
| ft_isdigit | int ft_isdigit(int c); | Tests for any character for which 0-9 is true |
| ft_isalnum | int ft_isalnum(int c); | Tests for any character for which a-z, A-Z, or 0-9 is true |
| ft_isascii | int ft_isascii(int c); | Tests for any character for which in the ASCII table is true |
| ft_isprint | int ft_isprint(int c); | Tests for any printing character, including space (' ') |
| ft_strlen | size_t ft_strlen(const char *str); | Counts the length of the string |
| ft_memset | void *ft_memset(void *buf, int c, size_t n); | Fills a block of memory with a particular value |
| ft_bzero | void ft_bzero(void *buf, size_t n); | Erases the data in the n bytes of the memory starting at the location pointed to by buf, by writing 0 |
| ft_memcpy | void *ft_memcpy(void *dst, const void *src, size_t n); | Copies n bytes from memory area src to memory area dest |
| ft_memmove | void *ft_memmove(void *dst, const void *src, size_t n); | Copies the data first to an intermediate buffer, then from the buffer to destination |
| ft_strlcpy | size_t ft_strlcpy(char *dst, const char *src, size_t n); | Copies the data in the n bytes and concatenate strings respectively with allow support |
| ft_strlcat | size_t ft_strlcat(char *dst, const char *src, size_t n); | Copies the data in the n bytes and concatenate strings respectively |
| ft_toupper | int ft_toupper(int c); | Converts a lower-case letter to the corresponding upper-case letter |
| ft_tolower | int ft_tolower(int c); | Converts an upper-case letter to the corresponding lower-case letter |
| ft_strchr | char *ft_strchr(const char *str, int c); | Returns a pointer to the first occurrence of the character c in the string str |
| ft_strrchr | char *ft_strrchr(const char *str, int c); | Returns a pointer to the last occurrence of the character c in the string str (begin the search by the end) |
| ft_strncmp | int ft_strncmp(const char *s1, const char *s2, size_t n); | Compares the two strings s1 and s2 and returns an integer less than, equal to, or greater than zero if s1 is found |
| ft_memchr | void *ft_memchr(const void *str, int c, size_t n); | Locates the first occurrence of the character c (converted to an unsigned char) in string str and return the string from it |
| ft_memcmp | int ft_memcmp(const void *s1, const void *s2, size_t n); | Compares the data in the n bytes from string s1 against byte string s2, the function does not stop comparing after finding a null character |
| ft_strnstr | char *ft_strnstr(const char *big, const char *little, size_t len); | Locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched |
| ft_atoi | int ft_atoi(const char *str); | Converts the string pointed to by str to int |
| ft_calloc | void *ft_calloc(size_t ecount, size_t esize); | Allocates a block of memory for an array of num elements, each of them size bytes long, and initializes all its bits to zero |
| ft_strdup | char *ft_strdup(const char *str); | Duplicate a string in a dynamic memory using malloc |
| ft_substr | char *ft_substr(const char *str, unsigned int start, size_t len); | Extracts a substring out of str and returns it |
| ft_strjoin | char *ft_strjoin(char const *s1, char const *s2); | Combines strings to a string in a dynamic memory using malloc |
| ft_strtrim | char *ft_strtrim(char const *s1, char const *set); | Removes all set characters from the beginning and the end of a string |
| ft_split | char **ft_split(char const *str, char c); | Splits a string into a series of tokens based on a particular delimiter |
| ft_itoa | char *ft_itoa(int n); | Converts the int to a string char * |
| ft_strmapi | char *ft_strmapi(char const *str, char (*f)(unsigned int, char)); | Applies the function f to each character of the string s to create a new string (with malloc()) resulting from successive applications of f |
| ft_striteri | void ft_striteri(char *str, void (*f)(unsigned int, char*)); | Applies the function f to each character of the string passed as argument |
| ft_putchar_fd | void ft_putchar_fd(char c, int fd); | Writes the character c on the file descriptor given |
| ft_putstr_fd | void ft_putstr_fd(char *str, int fd); | Writes the string str on the file descriptor given |
| ft_putendl_fd | void ft_putendl_fd(char *str, int fd); | Writes the string str on the file descriptor given with a new line at the end |
| ft_putnbr_fd | void ft_putnbr_fd(int n, int fd); | Write the integer n to the given file descriptor given |
