#define YASM_NASMLIB_H
#define nasm_malloc yasm_xmalloc
#define nasm_realloc yasm_xrealloc
#define nasm_free(p) do  while(0)
#define nasm_free(p) yasm_xfree(p)
#define nasm_strdup yasm__xstrdup
#define nasm_strndup yasm__xstrndup
#define nasm_stricmp yasm__strcasecmp
#define nasm_strnicmp yasm__strncasecmp
yasm_intnum *nasm_readnum(char *str, int *error);
yasm_intnum *nasm_readstrnum(char *str, size_t length, int *warn);
char *nasm_src_set_fname(char *newname);
char *nasm_src_get_fname(void);
long nasm_src_set_linnum(long newline);
long nasm_src_get_linnum(void);
int nasm_src_get(long *xline, char **xname);
void nasm_quote(char **str);
char *nasm_strcat(const char *one, const char *two);
