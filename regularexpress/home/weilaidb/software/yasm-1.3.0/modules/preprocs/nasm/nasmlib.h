#define YASM_NASMLIB_H
#define nasm_malloc yasm_xmalloc
#define nasm_realloc yasm_xrealloc
while
nasm_free yasm_xfree(p)
#define nasm_strdup yasm__xstrdup
#define nasm_strndup yasm__xstrndup
#define nasm_stricmp yasm__strcasecmp
#define nasm_strnicmp yasm__strncasecmp
*nasm_readnum;
*nasm_readstrnum;
*nasm_src_set_fname;
*nasm_src_get_fname;
nasm_src_set_linnum;
nasm_src_get_linnum;
nasm_src_get;
nasm_quote;
*nasm_strcat;
