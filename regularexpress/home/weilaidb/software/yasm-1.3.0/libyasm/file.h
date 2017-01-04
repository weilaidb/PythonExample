#define YASM_FILE_H
#define YASM_LIB_DECL
typedef struct yasm_scanner  yasm_scanner;
YASM_LIB_DECL
void yasm_scanner_initialize(yasm_scanner *scanner);
YASM_LIB_DECL
void yasm_scanner_delete(yasm_scanner *scanner);
YASM_LIB_DECL
int yasm_fill_helper
(yasm_scanner *scanner, unsigned char **cursor,
size_t (*input_func) (void *d, unsigned char *buf, size_t max),
void *input_func_data);
YASM_LIB_DECL
void yasm_unescape_cstring(unsigned char *str, size_t *len);
YASM_LIB_DECL
size_t yasm__splitpath_unix(const char *path, const char **tail);
YASM_LIB_DECL
size_t yasm__splitpath_win(const char *path, const char **tail);
# if defined (_WIN32) || defined (WIN32) || defined (__MSDOS__) || \
defined (__DJGPP__) || defined (__OS2__)
#  define yasm__splitpath(path, tail)   yasm__splitpath_win(path, tail)
# else
#  define yasm__splitpath(path, tail)   yasm__splitpath_unix(path, tail)
# endif
YASM_LIB_DECL char *yasm__getcwd(void);
YASM_LIB_DECL char *yasm__abspath(const char *path);
YASM_LIB_DECL
char *yasm__combpath_unix(const char *from, const char *to);
YASM_LIB_DECL
char *yasm__combpath_win(const char *from, const char *to);
# if defined (_WIN32) || defined (WIN32) || defined (__MSDOS__) || \
defined (__DJGPP__) || defined (__OS2__)
#  define yasm__combpath(from, to)      yasm__combpath_win(from, to)
# else
#  define yasm__combpath(from, to)      yasm__combpath_unix(from, to)
# endif
YASM_LIB_DECL
size_t yasm__createpath_common(const char *path, int win);
# if defined (_WIN32) || defined (WIN32) || defined (__MSDOS__) || \
defined (__DJGPP__) || defined (__OS2__)
#  define yasm__createpath(path)    yasm__createpath_common(path, 1)
# else
#  define yasm__createpath(path)    yasm__createpath_common(path, 0)
# endif
YASM_LIB_DECL FILE *yasm_fopen_include
(const char *iname, const char *from, const char *mode, char **oname);
YASM_LIB_DECL
void yasm_delete_include_paths(void);
YASM_LIB_DECL
const char * yasm_get_include_dir(void **iter);
YASM_LIB_DECL
void yasm_add_include_path(const char *path);
#define YASM_WRITE_8(ptr, val)                  \
*((ptr)++) = (unsigned char)((val) & 0xFF)
#define YASM_WRITE_16_L(ptr, val)               \
do  while (0)
#define YASM_WRITE_32_L(ptr, val)               \
do  while (0)
#define YASM_WRITE_16_B(ptr, val)               \
do  while (0)
#define YASM_WRITE_32_B(ptr, val)               \
do  while (0)
#define YASM_SAVE_8(ptr, val)                   \
*(ptr) = (unsigned char)((val) & 0xFF)
#define YASM_SAVE_16_L(ptr, val)                \
do  while (0)
#define YASM_SAVE_32_L(ptr, val)                \
do  while (0)
#define YASM_SAVE_16_B(ptr, val)                \
do  while (0)
#define YASM_SAVE_32_B(ptr, val)                \
do  while (0)
YASM_LIB_DECL
size_t yasm_fwrite_16_l(unsigned short val, FILE *f);
YASM_LIB_DECL
size_t yasm_fwrite_32_l(unsigned long val, FILE *f);
YASM_LIB_DECL
size_t yasm_fwrite_16_b(unsigned short val, FILE *f);
YASM_LIB_DECL
size_t yasm_fwrite_32_b(unsigned long val, FILE *f);
#define YASM_READ_8(val, ptr)                   \
(val) = *((ptr)++) & 0xFF
#define YASM_READ_16_L(val, ptr)                \
do  while (0)
#define YASM_READ_32_L(val, ptr)                \
do  while (0)
#define YASM_READ_16_B(val, ptr)                \
do  while (0)
#define YASM_READ_32_B(val, ptr)                \
do  while (0)
#define YASM_LOAD_8(val, ptr)                   \
(val) = *(ptr) & 0xFF
#define YASM_LOAD_16_L(val, ptr)                \
do  while (0)
#define YASM_LOAD_32_L(val, ptr)                \
do  while (0)
#define YASM_LOAD_16_B(val, ptr)                \
do  while (0)
#define YASM_LOAD_32_B(val, ptr)                \
do  while (0)
