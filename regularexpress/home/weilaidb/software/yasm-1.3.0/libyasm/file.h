#define YASM_FILE_H
#define YASM_LIB_DECL
typedef struct yasm_scanner  yasm_scanner;
YASM_LIB_DECL
yasm_scanner_initialize;
YASM_LIB_DECL
yasm_scanner_delete;
YASM_LIB_DECL
int yasm_fill_helper
(yasm_scanner *scanner, unsigned char **cursor,
size_t (*input_func) (void *d, unsigned char *buf, size_t max),
void *input_func_data);
YASM_LIB_DECL
yasm_unescape_cstring;
YASM_LIB_DECL
yasm__splitpath_unix;
YASM_LIB_DECL
yasm__splitpath_win;
# if defined (_WIN32) || defined (WIN32) || defined (__MSDOS__) || \
defined (__DJGPP__) || defined (__OS2__)
yasm__splitpath   yasm__splitpath_win(path, tail)
# else
yasm__splitpath   yasm__splitpath_unix(path, tail)
# endif
*yasm__getcwd;
*yasm__abspath;
YASM_LIB_DECL
*yasm__combpath_unix;
YASM_LIB_DECL
*yasm__combpath_win;
# if defined (_WIN32) || defined (WIN32) || defined (__MSDOS__) || \
defined (__DJGPP__) || defined (__OS2__)
yasm__combpath      yasm__combpath_win(from, to)
# else
yasm__combpath      yasm__combpath_unix(from, to)
# endif
YASM_LIB_DECL
yasm__createpath_common;
# if defined (_WIN32) || defined (WIN32) || defined (__MSDOS__) || \
defined (__DJGPP__) || defined (__OS2__)
yasm__createpath    yasm__createpath_common(path, 1)
# else
yasm__createpath    yasm__createpath_common(path, 0)
# endif
YASM_LIB_DECL FILE *yasm_fopen_include
(const char *iname, const char *from, const char *mode, char **oname);
YASM_LIB_DECL
yasm_delete_include_paths;
YASM_LIB_DECL
yasm_get_include_dir;
YASM_LIB_DECL
yasm_add_include_path;
YASM_WRITE_8                  \
*((ptr)++) = (unsigned char)((val) & 0xFF)
YASM_WRITE_16_L               \
do  while (0)
YASM_WRITE_32_L               \
do  while (0)
YASM_WRITE_16_B               \
do  while (0)
YASM_WRITE_32_B               \
do  while (0)
YASM_SAVE_8                   \
*(ptr) = (unsigned char)((val) & 0xFF)
YASM_SAVE_16_L                \
do  while (0)
YASM_SAVE_32_L                \
do  while (0)
YASM_SAVE_16_B                \
do  while (0)
YASM_SAVE_32_B                \
do  while (0)
YASM_LIB_DECL
yasm_fwrite_16_l;
YASM_LIB_DECL
yasm_fwrite_32_l;
YASM_LIB_DECL
yasm_fwrite_16_b;
YASM_LIB_DECL
yasm_fwrite_32_b;
YASM_READ_8                   \
(val) = *((ptr)++) & 0xFF
YASM_READ_16_L                \
do  while (0)
YASM_READ_32_L                \
do  while (0)
YASM_READ_16_B                \
do  while (0)
YASM_READ_32_B                \
do  while (0)
YASM_LOAD_8                   \
(val) = *(ptr) & 0xFF
YASM_LOAD_16_L                \
do  while (0)
YASM_LOAD_32_L                \
do  while (0)
YASM_LOAD_16_B                \
do  while (0)
YASM_LOAD_32_B                \
do  while (0)
