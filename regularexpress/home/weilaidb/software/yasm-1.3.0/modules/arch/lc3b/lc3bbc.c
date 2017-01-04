static void lc3b_bc_insn_destroy(void *contents);
static void lc3b_bc_insn_print(const void *contents, FILE *f,
int indent_level);
static int lc3b_bc_insn_calc_len(yasm_bytecode *bc,
yasm_bc_add_span_func add_span,
void *add_span_data);
static int lc3b_bc_insn_expand(yasm_bytecode *bc, int span, long old_val,
long new_val, long *neg_thres, long *pos_thres);
static int lc3b_bc_insn_tobytes(yasm_bytecode *bc, unsigned char **bufp,
unsigned char *bufstart,
void *d, yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
static const yasm_bytecode_callback lc3b_bc_callback_insn = ;
void
yasm_lc3b__bc_transform_insn(yasm_bytecode *bc, lc3b_insn *insn)
static void
lc3b_bc_insn_destroy(void *contents)
static void
lc3b_bc_insn_print(const void *contents, FILE *f, int indent_level)
static int
lc3b_bc_insn_calc_len(yasm_bytecode *bc, yasm_bc_add_span_func add_span,
void *add_span_data)
static int
lc3b_bc_insn_expand(yasm_bytecode *bc, int span, long old_val, long new_val, long *neg_thres, long *pos_thres)
static int
lc3b_bc_insn_tobytes(yasm_bytecode *bc, unsigned char **bufp,
unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc)
int
yasm_lc3b__intnum_tobytes(yasm_arch *arch, const yasm_intnum *intn,
unsigned char *buf, size_t destsize, size_t valsize,
int shift, const yasm_bytecode *bc, int warn)
