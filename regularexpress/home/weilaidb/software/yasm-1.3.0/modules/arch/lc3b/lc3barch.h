#define YASM_LC3BARCH_H
typedef enum lc3b_imm_type  lc3b_imm_type;
typedef struct lc3b_insn  lc3b_insn;
void yasm_lc3b__bc_transform_insn(yasm_bytecode *bc, lc3b_insn *insn);
yasm_arch_insnprefix yasm_lc3b__parse_check_insnprefix
(yasm_arch *arch, const char *id, size_t id_len, unsigned long line, yasm_bytecode **bc, uintptr_t *prefix);
yasm_arch_regtmod yasm_lc3b__parse_check_regtmod
(yasm_arch *arch, const char *id, size_t id_len, uintptr_t *data);
int yasm_lc3b__intnum_tobytes
(yasm_arch *arch, const yasm_intnum *intn, unsigned char *buf,
size_t destsize, size_t valsize, int shift, const yasm_bytecode *bc,
int warn); yasm_bytecode *yasm_lc3b__create_empty_insn(yasm_arch *arch,
unsigned long line);
void yasm_lc3b__ea_destroy( yasm_effaddr *ea);
