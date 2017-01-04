void
yasm_ea_set_segreg(yasm_effaddr *ea, uintptr_t segreg)
yasm_insn_operand *
yasm_operand_create_reg(uintptr_t reg)
yasm_insn_operand *
yasm_operand_create_segreg(uintptr_t segreg)
yasm_insn_operand *
yasm_operand_create_mem( yasm_effaddr *ea)
yasm_insn_operand *
yasm_operand_create_imm( yasm_expr *val)
yasm_insn_operand *
yasm_insn_ops_append(yasm_insn *insn, yasm_insn_operand *op)
void
yasm_insn_add_prefix(yasm_insn *insn, uintptr_t prefix)
void
yasm_insn_add_seg_prefix(yasm_insn *insn, uintptr_t segreg)
void
yasm_insn_initialize(yasm_insn *insn)
void
yasm_insn_delete(yasm_insn *insn,
void (*ea_destroy) ( yasm_effaddr *))
void
yasm_insn_print(const yasm_insn *insn, FILE *f, int indent_level)
void
yasm_insn_finalize(yasm_insn *insn)
