#define YASM_LINEMAP_H
#define YASM_LIB_DECL
YASM_LIB_DECL
yasm_linemap *yasm_linemap_create(void);
YASM_LIB_DECL
void yasm_linemap_destroy(yasm_linemap *linemap);
YASM_LIB_DECL
unsigned long yasm_linemap_get_current(yasm_linemap *linemap);
YASM_LIB_DECL
int yasm_linemap_get_source(yasm_linemap *linemap, unsigned long line, yasm_bytecode **bcp,
const char **sourcep);
YASM_LIB_DECL
void yasm_linemap_add_source(yasm_linemap *linemap, yasm_bytecode *bc,
const char *source);
YASM_LIB_DECL
unsigned long yasm_linemap_goto_next(yasm_linemap *linemap);
YASM_LIB_DECL
void yasm_linemap_set(yasm_linemap *linemap, const char *filename,
unsigned long virtual_line, unsigned long file_line,
unsigned long line_inc);
YASM_LIB_DECL
unsigned long yasm_linemap_poke(yasm_linemap *linemap, const char *filename,
unsigned long file_line);
YASM_LIB_DECL
void yasm_linemap_lookup(yasm_linemap *linemap, unsigned long line, const char **filename, unsigned long *file_line);
YASM_LIB_DECL
int yasm_linemap_traverse_filenames
(yasm_linemap *linemap, void *d,
int (*func) (const char *filename, void *d));
