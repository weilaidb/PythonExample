static const char *cpu_find_reverse(unsigned int cpu0, unsigned int cpu1,
unsigned int cpu2);
#define MOD_Gap     0
#define MOD_PreAdd  1
#define MOD_Op0Add  2
#define MOD_Op1Add  3
#define MOD_Op2Add  4
#define MOD_SpAdd   5
#define MOD_OpSizeR 6
#define MOD_Imm8    7
#define MOD_AdSizeR 8
#define MOD_DOpS64R 9
#define MOD_Op1AddSp 10
#define MOD_SetVEX  11
enum x86_gas_suffix_flags ;
enum x86_misc_flags ;
enum x86_operand_type ;
enum x86_operand_size ;
enum x86_operand_targetmod ;
enum x86_operand_action ;
enum x86_operand_post_action ;
typedef struct x86_info_operand  x86_info_operand;
typedef struct x86_insn_info  x86_insn_info;
typedef struct x86_id_insn  x86_id_insn;
static void x86_id_insn_destroy(void *contents);
static void x86_id_insn_print(const void *contents, FILE *f, int indent_level);
static void x86_id_insn_finalize(yasm_bytecode *bc, yasm_bytecode *prev_bc);
static const yasm_bytecode_callback x86_id_insn_callback = ;
static int
x86_expr_contains_simd_cb(const yasm_expr__item *ei, void *d)
static int
x86_expr_contains_simd(const yasm_expr *e, int ymm)
static void
x86_finalize_common(x86_common *common, const x86_insn_info *info,
unsigned int mode_bits)
static void
x86_finalize_opcode(x86_opcode *opcode, const x86_insn_info *info)
static void
x86_id_insn_clear_operands(x86_id_insn *id_insn)
static void
x86_finalize_jmpfar(yasm_bytecode *bc, yasm_bytecode *prev_bc,
const x86_insn_info *info)
static void
x86_finalize_jmp(yasm_bytecode *bc, yasm_bytecode *prev_bc,
const x86_insn_info *jinfo)
static const x86_insn_info *
x86_find_match(x86_id_insn *id_insn, yasm_insn_operand **ops,
yasm_insn_operand **rev_ops, const unsigned int *size_lookup,
int bypass)
static void
x86_match_error(x86_id_insn *id_insn, yasm_insn_operand **ops,
yasm_insn_operand **rev_ops, const unsigned int *size_lookup)
static void
x86_id_insn_finalize(yasm_bytecode *bc, yasm_bytecode *prev_bc)
typedef struct insnprefix_parse_data  insnprefix_parse_data;
static const char *
cpu_find_reverse(unsigned int cpu0, unsigned int cpu1, unsigned int cpu2)
yasm_arch_insnprefix
yasm_x86__parse_check_insnprefix(yasm_arch *arch, const char *id,
size_t id_len, unsigned long line,
yasm_bytecode **bc, uintptr_t *prefix)
static void
x86_id_insn_destroy(void *contents)
static void
x86_id_insn_print(const void *contents, FILE *f, int indent_level)
yasm_bytecode *
yasm_x86__create_empty_insn(yasm_arch *arch, unsigned long line)
