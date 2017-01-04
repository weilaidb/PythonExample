#define FTF_FULLPATH	0x1
#define FTF_VARALIGN	0x2
#define FTF_NAMEPROPS	0x4
#define FTF_BOOTCPUID	0x8
#define FTF_STRTABSIZE	0x10
#define FTF_STRUCTSIZE	0x20
#define FTF_NOPS	0x40
static struct version_info  version_table[] = ;
struct emitter ;
static void bin_emit_cell(void *e, cell_t val)
static void bin_emit_string(void *e, char *str, int len)
static void bin_emit_align(void *e, int a)
static void bin_emit_data(void *e, struct data d)
static void bin_emit_beginnode(void *e, struct label *labels)
static void bin_emit_endnode(void *e, struct label *labels)
static void bin_emit_property(void *e, struct label *labels)
static struct emitter bin_emitter = ;
static void emit_label(FILE *f, const char *prefix, const char *label)
static void emit_offset_label(FILE *f, const char *label, int offset)
#define ASM_EMIT_BELONG(f, fmt, ...) \
static void asm_emit_cell(void *e, cell_t val)
static void asm_emit_string(void *e, char *str, int len)
static void asm_emit_align(void *e, int a)
static void asm_emit_data(void *e, struct data d)
static void asm_emit_beginnode(void *e, struct label *labels)
static void asm_emit_endnode(void *e, struct label *labels)
static void asm_emit_property(void *e, struct label *labels)
static struct emitter asm_emitter = ;
static int stringtable_insert(struct data *d, const char *str)
static void flatten_tree(struct node *tree, struct emitter *emit,
void *etarget, struct data *strbuf,
struct version_info *vi)
static struct data flatten_reserve_list(struct reserve_info *reservelist,
struct version_info *vi)
static void make_fdt_header(struct fdt_header *fdt,
struct version_info *vi,
int reservesize, int dtsize, int strsize,
int boot_cpuid_phys)
void dt_to_blob(FILE *f, struct boot_info *bi, int version)
static void dump_stringtable_asm(FILE *f, struct data strbuf)
void dt_to_asm(FILE *f, struct boot_info *bi, int version)
struct inbuf ;
static void inbuf_init(struct inbuf *inb, void *base, void *limit)
static void flat_read_chunk(struct inbuf *inb, void *p, int len)
static uint32_t flat_read_word(struct inbuf *inb)
static void flat_realign(struct inbuf *inb, int align)
static char *flat_read_string(struct inbuf *inb)
static struct data flat_read_data(struct inbuf *inb, int len)
static char *flat_read_stringtable(struct inbuf *inb, int offset)
static struct property *flat_read_property(struct inbuf *dtbuf,
struct inbuf *strbuf, int flags)
static struct reserve_info *flat_read_mem_reserve(struct inbuf *inb)
static char *nodename_from_path(const char *ppath, const char *cpath)
static struct node *unflatten_tree(struct inbuf *dtbuf,
struct inbuf *strbuf,
const char *parent_flatname, int flags)
struct boot_info *dt_from_blob(const char *fname)
