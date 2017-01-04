#define REGULAR_BUF_SIZE    1024
yasm_listfmt_module yasm_nasm_LTX_listfmt;
typedef struct sectreloc  sectreloc;
typedef struct bcreloc  bcreloc;
typedef struct nasm_listfmt_output_info  nasm_listfmt_output_info;
static yasm_listfmt *
nasm_listfmt_create(const char *in_filename, const char *obj_filename)
static void
nasm_listfmt_destroy( yasm_listfmt *listfmt)
static int
nasm_listfmt_output_value(yasm_value *value, unsigned char *buf,
unsigned int destsize, unsigned long offset,
yasm_bytecode *bc, int warn, void *d)
static void
nasm_listfmt_output(yasm_listfmt *listfmt, FILE *f, yasm_linemap *linemap,
yasm_arch *arch)
yasm_listfmt_module yasm_nasm_LTX_listfmt = ;
