#define YASM_LINEMAP_H
#define YASM_LIB_DECL
YASM_LIB_DECL
*yasm_linemap_create;
YASM_LIB_DECL
yasm_linemap_destroy;
YASM_LIB_DECL
yasm_linemap_get_current;
YASM_LIB_DECL
yasm_linemap_get_source;
YASM_LIB_DECL
yasm_linemap_add_source;
YASM_LIB_DECL
yasm_linemap_goto_next;
YASM_LIB_DECL
yasm_linemap_set;
YASM_LIB_DECL
yasm_linemap_poke;
YASM_LIB_DECL
yasm_linemap_lookup;
YASM_LIB_DECL
int yasm_linemap_traverse_filenames
(yasm_linemap *linemap, void *d,
int (*func) (const char *filename, void *d));
