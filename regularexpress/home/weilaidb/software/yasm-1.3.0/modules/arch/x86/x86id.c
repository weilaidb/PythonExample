*cpu_find_reverse;
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
x86_id_insn_destroy;
x86_id_insn_print;
x86_id_insn_finalize;
static const yasm_bytecode_callback x86_id_insn_callback = ;
x86_expr_contains_simd_cb
x86_expr_contains_simd
x86_finalize_common
x86_finalize_opcode
x86_id_insn_clear_operands
x86_finalize_jmpfar
x86_finalize_jmp
x86_find_match
x86_match_error
x86_id_insn_finalize
typedef struct insnprefix_parse_data  insnprefix_parse_data;
cpu_find_reverse
yasm_x86__parse_check_insnprefix
x86_id_insn_destroy
x86_id_insn_print
yasm_x86__create_empty_insn
