lib_isnumchar   ( isalnum(c) || (c) == '$')
numvalue  ((c)>='a' ? (c)-'a'+10 : (c)>='A' ? (c)-'A'+10 : (c)-'0')
yasm_intnum *nasm_readnum (char *str, int *error)
yasm_intnum *nasm_readstrnum (char *str, size_t length, int *warn)
static char *file_name = NULL;
static long line_number = 0;
*nasm_src_set_fname
*nasm_src_get_fname
nasm_src_set_linnum
nasm_src_get_linnum
nasm_src_get
nasm_quote
*nasm_strcat
