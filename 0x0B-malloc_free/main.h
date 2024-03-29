#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
void *malloc_checked(unsigned int b);
void *_calloc(unsigned int nmemb, unsigned int size);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *create_array(unsigned int size, char c);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
char *_memset(char *s, char b, unsigned int n);
int _putchar(char c);
int _strlen(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);
void _puts(char *str);
unsigned int _strspn(char *s, char *accept);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
#endif
