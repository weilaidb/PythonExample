#define BSIZE   8192
void
yasm_scanner_initialize(yasm_scanner *s)
void
yasm_scanner_delete(yasm_scanner *s)
int
yasm_fill_helper(yasm_scanner *s, unsigned char **cursor,
size_t (*input_func) (void *d, unsigned char *buf,
size_t max),
void *input_func_data)
void
yasm_unescape_cstring(unsigned char *str, size_t *len)
size_t
yasm__splitpath_unix(const char *path, const char **tail)
size_t
yasm__splitpath_win(const char *path, const char **tail)
char *
yasm__getcwd(void)
char *
yasm__abspath(const char *path)
char *
yasm__combpath_unix(const char *from, const char *to)
char *
yasm__combpath_win(const char *from, const char *to)
size_t
yasm__createpath_common(const char *path, int win)
typedef struct incpath  incpath;
STAILQ_HEAD(incpath_head, incpath) incpaths = STAILQ_HEAD_INITIALIZER(incpaths);
FILE *
yasm_fopen_include(const char *iname, const char *from, const char *mode,
char **oname)
void
yasm_delete_include_paths(void)
const char *
yasm_get_include_dir(void **iter)
void
yasm_add_include_path(const char *path)
size_t
yasm_fwrite_16_l(unsigned short val, FILE *f)
size_t
yasm_fwrite_32_l(unsigned long val, FILE *f)
size_t
yasm_fwrite_16_b(unsigned short val, FILE *f)
size_t
yasm_fwrite_32_b(unsigned long val, FILE *f)
