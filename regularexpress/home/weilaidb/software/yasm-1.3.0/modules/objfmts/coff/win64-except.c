#define UNW_FLAG_EHANDLER   0x01
#define UNW_FLAG_UHANDLER   0x02
#define UNW_FLAG_CHAININFO  0x04
static void win64_uwinfo_bc_destroy(void *contents);
static void win64_uwinfo_bc_print(const void *contents, FILE *f,
int indent_level);
static void win64_uwinfo_bc_finalize(yasm_bytecode *bc,
yasm_bytecode *prev_bc);
static int win64_uwinfo_bc_calc_len
(yasm_bytecode *bc, yasm_bc_add_span_func add_span, void *add_span_data);
static int win64_uwinfo_bc_expand(yasm_bytecode *bc, int span, long old_val,
long new_val, long *neg_thres, long *pos_thres);
static int win64_uwinfo_bc_tobytes
(yasm_bytecode *bc, unsigned char **bufp, unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
static void win64_uwcode_bc_destroy(void *contents);
static void win64_uwcode_bc_print(const void *contents, FILE *f,
int indent_level);
static void win64_uwcode_bc_finalize(yasm_bytecode *bc,
yasm_bytecode *prev_bc);
static int win64_uwcode_bc_calc_len
(yasm_bytecode *bc, yasm_bc_add_span_func add_span, void *add_span_data);
static int win64_uwcode_bc_expand(yasm_bytecode *bc, int span, long old_val,
long new_val, long *neg_thres, long *pos_thres);
static int win64_uwcode_bc_tobytes
(yasm_bytecode *bc, unsigned char **bufp, unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
static const yasm_bytecode_callback win64_uwinfo_bc_callback = ;
static const yasm_bytecode_callback win64_uwcode_bc_callback = ;
coff_unwind_info *
yasm_win64__uwinfo_create(void)
void
yasm_win64__uwinfo_destroy(coff_unwind_info *info)
void
yasm_win64__unwind_generate(yasm_section *xdata, coff_unwind_info *info,
unsigned long line)
static void
win64_uwinfo_bc_destroy(void *contents)
static void
win64_uwinfo_bc_print(const void *contents, FILE *f, int indent_level)
static void
win64_uwinfo_bc_finalize(yasm_bytecode *bc, yasm_bytecode *prev_bc)
static int
win64_uwinfo_bc_calc_len(yasm_bytecode *bc, yasm_bc_add_span_func add_span,
void *add_span_data)
static int
win64_uwinfo_bc_expand(yasm_bytecode *bc, int span, long old_val, long new_val, long *neg_thres, long *pos_thres)
static int
win64_uwinfo_bc_tobytes(yasm_bytecode *bc, unsigned char **bufp,
unsigned char *bufstart, void *d,
yasm_output_value_func output_value,
yasm_output_reloc_func output_reloc)
static void
win64_uwcode_bc_destroy(void *contents)
static void
win64_uwcode_bc_print(const void *contents, FILE *f, int indent_level)
static void
win64_uwcode_bc_finalize(yasm_bytecode *bc, yasm_bytecode *prev_bc)
static int
win64_uwcode_bc_calc_len(yasm_bytecode *bc, yasm_bc_add_span_func add_span,
void *add_span_data)
static int
win64_uwcode_bc_expand(yasm_bytecode *bc, int span, long old_val, long new_val, long *neg_thres, long *pos_thres)
static int
win64_uwcode_bc_tobytes(yasm_bytecode *bc, unsigned char **bufp,
unsigned char *bufstart, void *d,
yasm_output_value_func output_value,
yasm_output_reloc_func output_reloc)
