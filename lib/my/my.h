/*
** EPITECH PROJECT, 2019
** my_print_alpha.c
** File description:
** print the alphabet in ascending order
*/

void my_putchar(char c);
int my_usage(int a, int b);
int my_isneg(int nb);
int my_put_nbr(int nb);
int my_add(int a, int b);
int my_sub(int a, int b);
int my_mul(int a, int b);
int my_div(int a, int b);
int my_mod(int a, int b);
void my_put_error(char *str);
void my_swap(int *a, int *b);
void my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
char *my_append(char *s1, char *s2);
char **my_add_str_to_array(char **arr, char *str);
char **my_remove_str_from_array(char **arr, char *str);
char *my_three_append(char *s1, char *s2, char *s3);
void my_put_array(char **arr, int new_line);
int my_count_word(char *str);
char *my_str_dupword(char const *src, int *i);
int my_strlen_reversestop(char *str, char c);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
char *my_strcutdup(char const *src, char cut);
int my_jump_to_word(char *str, int *i);
int my_compute_square_root(int nb);
int my_strcutlen(char *str, char c);
int my_is_prime(int nb);
void my_free_array(char **array);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
int my_count_occurences(char *str, char c);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strndup(char const *src, int len);
char *my_revstr(char *str);
char *my_strdup(char *str);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str, int size);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strstr(char *str, char const *find);
char *my_strncat(char *dest, char const *src, int n);
char **my_str_to_word_array(char *str);