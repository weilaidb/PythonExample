static void x86_bc_insn_destroy(void *contents);
static void x86_bc_insn_print(const void *contents, FILE *f,
int indent_level);
static int x86_bc_insn_calc_len(yasm_bytecode *bc,
yasm_bc_add_span_func add_span,
void *add_span_data);
static int x86_bc_insn_expand(yasm_bytecode *bc, int span, long old_val,
long new_val, long *neg_thres, long *pos_thres);
static int x86_bc_insn_tobytes(yasm_bytecode *bc, unsigned char **bufp,
unsigned char *bufstart,
void *d, yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
static void x86_bc_jmp_destroy(void *contents);
static void x86_bc_jmp_print(const void *contents, FILE *f, int indent_level);
static int x86_bc_jmp_calc_len(yasm_bytecode *bc,
yasm_bc_add_span_func add_span,
void *add_span_data);
static int x86_bc_jmp_expand(yasm_bytecode *bc, int span, long old_val,
long new_val, long *neg_thres, long *pos_thres);
static int x86_bc_jmp_tobytes(yasm_bytecode *bc, unsigned char **bufp,
unsigned char *bufstart,
void *d, yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
static void x86_bc_jmpfar_destroy(void *contents);
static void x86_bc_jmpfar_print(const void *contents, FILE *f,
int indent_level);
static int x86_bc_jmpfar_calc_len(yasm_bytecode *bc,
yasm_bc_add_span_func add_span,
void *add_span_data);
static int x86_bc_jmpfar_tobytes
(yasm_bytecode *bc, unsigned char **bufp, unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
static const yasm_bytecode_callback x86_bc_callback_insn = ;
static const yasm_bytecode_callback x86_bc_callback_jmp = ;
static const yasm_bytecode_callback x86_bc_callback_jmpfar = ;
int
yasm_x86__set_rex_from_reg(unsigned char *rex, unsigned char *low3,
uintptr_t reg, unsigned int bits,
x86_rex_bit_pos rexbit)
void
yasm_x86__bc_transform_insn(yasm_bytecode *bc, x86_insn *insn)
void
yasm_x86__bc_transform_jmp(yasm_bytecode *bc, x86_jmp *jmp)
void
yasm_x86__bc_transform_jmpfar(yasm_bytecode *bc, x86_jmpfar *jmpfar)
void
yasm_x86__ea_init(x86_effaddr *x86_ea, unsigned int spare,
yasm_bytecode *precbc)
void
yasm_x86__ea_set_disponly(x86_effaddr *x86_ea)
static x86_effaddr *
ea_create(void)
x86_effaddr *
yasm_x86__ea_create_reg(x86_effaddr *x86_ea, unsigned long reg,
unsigned char *rex, unsigned int bits)
yasm_effaddr *
yasm_x86__ea_create_expr(yasm_arch *arch, yasm_expr *e)
x86_effaddr *
yasm_x86__ea_create_imm(x86_effaddr *x86_ea, yasm_expr *imm,
unsigned int im_len)
void
yasm_x86__bc_apply_prefixes(x86_common *common, unsigned char *rex,
unsigned int def_opersize_64,
unsigned int num_prefixes, uintptr_t *prefixes)
static void
x86_bc_insn_destroy(void *contents)
static void
x86_bc_jmp_destroy(void *contents)
static void
x86_bc_jmpfar_destroy(void *contents)
void
yasm_x86__ea_destroy(yasm_effaddr *ea)
void
yasm_x86__ea_print(const yasm_effaddr *ea, FILE *f, int indent_level)
static void
x86_common_print(const x86_common *common, FILE *f, int indent_level)
static void
x86_opcode_print(const x86_opcode *opcode, FILE *f, int indent_level)
static void
x86_bc_insn_print(const void *contents, FILE *f, int indent_level)
static void
x86_bc_jmp_print(const void *contents, FILE *f, int indent_level)
static void
x86_bc_jmpfar_print(const void *contents, FILE *f, int indent_level)
static unsigned int
x86_common_calc_len(const x86_common *common)
static int
x86_bc_insn_calc_len(yasm_bytecode *bc, yasm_bc_add_span_func add_span,
void *add_span_data)
static int
x86_bc_insn_expand(yasm_bytecode *bc, int span, long old_val, long new_val, long *neg_thres, long *pos_thres)
static int
x86_bc_jmp_calc_len(yasm_bytecode *bc, yasm_bc_add_span_func add_span,
void *add_span_data)
static int
x86_bc_jmp_expand(yasm_bytecode *bc, int span, long old_val, long new_val, long *neg_thres, long *pos_thres)
static int
x86_bc_jmpfar_calc_len(yasm_bytecode *bc, yasm_bc_add_span_func add_span,
void *add_span_data)
static void
x86_common_tobytes(const x86_common *common, unsigned char **bufp,
unsigned int segreg)
static void
x86_opcode_tobytes(const x86_opcode *opcode, unsigned char **bufp)
static int
x86_bc_insn_tobytes(yasm_bytecode *bc, unsigned char **bufp,
unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc)
static int
x86_bc_jmp_tobytes(yasm_bytecode *bc, unsigned char **bufp,
unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc)
static int
x86_bc_jmpfar_tobytes(yasm_bytecode *bc, unsigned char **bufp,
unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc)
int
yasm_x86__intnum_tobytes(yasm_arch *arch, const yasm_intnum *intn,
unsigned char *buf, size_t destsize, size_t valsize,
int shift, const yasm_bytecode *bc, int warn)
