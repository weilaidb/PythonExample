typedef struct line_mapping  line_mapping;
typedef struct line_source_info  line_source_info;
struct yasm_linemap ;
static void
filename_delete_one( void *d)
void
yasm_linemap_set(yasm_linemap *linemap, const char *filename,
unsigned long virtual_line, unsigned long file_line,
unsigned long line_inc)
unsigned long
yasm_linemap_poke(yasm_linemap *linemap, const char *filename,
unsigned long file_line)
yasm_linemap *
yasm_linemap_create(void)
void
yasm_linemap_destroy(yasm_linemap *linemap)
unsigned long
yasm_linemap_get_current(yasm_linemap *linemap)
void
yasm_linemap_add_source(yasm_linemap *linemap, yasm_bytecode *bc,
const char *source)
unsigned long
yasm_linemap_goto_next(yasm_linemap *linemap)
void
yasm_linemap_lookup(yasm_linemap *linemap, unsigned long line,
const char **filename, unsigned long *file_line)
int
yasm_linemap_traverse_filenames(yasm_linemap *linemap, void *d,
int (*func) (const char *filename, void *d))
int
yasm_linemap_get_source(yasm_linemap *linemap, unsigned long line,
yasm_bytecode **bcp, const char **sourcep)
