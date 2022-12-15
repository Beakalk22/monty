#include <stdlib.h>

char **strtow(char *str, char *delims);
int is_delim(char ch, char *delims);
int get_word_length(char *str, char *delims);
int get_word_count(char *str, char *delims);
int *get_next_word(char *str, char *delims);

/**
 * strtow - string
 * @str: separate
 * @delims: words
 *
 * Return: 20 arrar
 */

