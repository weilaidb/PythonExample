void
yasm_bc_set_multiple(yasm_bytecode *bc, yasm_expr *e)
void
yasm_bc_finalize_common(yasm_bytecode *bc, yasm_bytecode *prev_bc)
int
yasm_bc_calc_len_common(yasm_bytecode *bc, yasm_bc_add_span_func add_span,
void *add_span_data)
int
yasm_bc_expand_common(yasm_bytecode *bc, int span, long old_val, long new_val, long *neg_thres, long *pos_thres)
int
yasm_bc_tobytes_common(yasm_bytecode *bc, unsigned char **buf,
unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc)
void
yasm_bc_transform(yasm_bytecode *bc, const yasm_bytecode_callback *callback,
void *contents)
yasm_bytecode *
yasm_bc_create_common(const yasm_bytecode_callback *callback, void *contents,
unsigned long line)
yasm_section *
yasm_bc_get_section(yasm_bytecode *bc)
void
yasm_bc__add_symrec(yasm_bytecode *bc, yasm_symrec *sym)
void
yasm_bc_destroy(yasm_bytecode *bc)
void
yasm_bc_print(const yasm_bytecode *bc, FILE *f, int indent_level)
void
yasm_bc_finalize(yasm_bytecode *bc, yasm_bytecode *prev_bc)
yasm_intnum *
yasm_calc_bc_dist(yasm_bytecode *precbc1, yasm_bytecode *precbc2)
unsigned long
yasm_bc_next_offset(yasm_bytecode *precbc)
int
yasm_bc_elem_size(yasm_bytecode *bc)
int
yasm_bc_calc_len(yasm_bytecode *bc, yasm_bc_add_span_func add_span,
void *add_span_data)
int
yasm_bc_expand(yasm_bytecode *bc, int span, long old_val, long new_val, long *neg_thres, long *pos_thres)
unsigned char *
yasm_bc_tobytes(yasm_bytecode *bc, unsigned char *buf, unsigned long *bufsize, int *gap, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc)
int
yasm_bc_get_multiple(yasm_bytecode *bc, long *multiple, int calc_bc_dist)
const yasm_expr *
yasm_bc_get_multiple_expr(const yasm_bytecode *bc)
yasm_insn *
yasm_bc_get_insn(yasm_bytecode *bc)
