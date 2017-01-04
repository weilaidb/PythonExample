#define lib_isnumchar(c)   ( isalnum(c) || (c) == '$')
#define numvalue(c)  ((c)>='a' ? (c)-'a'+10 : (c)>='A' ? (c)-'A'+10 : (c)-'0')
yasm_intnum *nasm_readnum (char *str, int *error)
yasm_intnum *nasm_readstrnum (char *str, size_t length, int *warn)
static char *file_name = NULL;
static long line_number = 0;
char *nasm_src_set_fname(char *newname)
char *nasm_src_get_fname(void)
long nasm_src_set_linnum(long newline)
long nasm_src_get_linnum(void)
int nasm_src_get(long *xline, char **xname)
void nasm_quote(char **str)
char *nasm_strcat(const char *one, const char *two)
