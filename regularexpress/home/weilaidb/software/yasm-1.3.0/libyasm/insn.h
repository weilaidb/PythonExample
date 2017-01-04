#define YASM_INSN_H
#define YASM_LIB_DECL
struct yasm_effaddr ;
typedef struct yasm_insn_operand yasm_insn_operand;
typedef enum yasm_insn_operand_type  yasm_insn_operand_type;
struct yasm_insn_operand ;
struct yasm_insn ;
YASM_LIB_DECL
void yasm_ea_set_segreg(yasm_effaddr *ea, uintptr_t segreg);
YASM_LIB_DECL
yasm_insn_operand *yasm_operand_create_reg(uintptr_t reg);
YASM_LIB_DECL
yasm_insn_operand *yasm_operand_create_segreg(uintptr_t segreg);
YASM_LIB_DECL
yasm_insn_operand *yasm_operand_create_mem( yasm_effaddr *ea);
YASM_LIB_DECL
yasm_insn_operand *yasm_operand_create_imm( yasm_expr *val);
yasm_insn_operand *yasm_insn_ops_first(yasm_insn *insn);
#define yasm_insn_ops_first(insn)   STAILQ_FIRST(&((insn)->operands))
yasm_insn_operand *yasm_insn_op_next(yasm_insn_operand *op);
#define yasm_insn_op_next(cur)      STAILQ_NEXT(cur, link)
YASM_LIB_DECL yasm_insn_operand *yasm_insn_ops_append
(yasm_insn *insn, yasm_insn_operand *op);
YASM_LIB_DECL
void yasm_insn_add_prefix(yasm_insn *insn, uintptr_t prefix);
YASM_LIB_DECL
void yasm_insn_add_seg_prefix(yasm_insn *insn, uintptr_t segreg);
YASM_LIB_DECL
void yasm_insn_initialize( yasm_insn *insn);
YASM_LIB_DECL
void yasm_insn_delete(yasm_insn *insn,
void (*ea_destroy) ( yasm_effaddr *));
YASM_LIB_DECL
void yasm_insn_print(const yasm_insn *insn, FILE *f, int indent_level);
YASM_LIB_DECL
void yasm_insn_finalize(yasm_insn *insn);
