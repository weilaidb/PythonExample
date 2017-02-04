#define YASM_INSN_H
#define YASM_LIB_DECL
struct yasm_effaddr ;
typedef struct yasm_insn_operand yasm_insn_operand;
typedef enum yasm_insn_operand_type  yasm_insn_operand_type;
struct yasm_insn_operand ;
struct yasm_insn ;
YASM_LIB_DECL
yasm_ea_set_segreg;
YASM_LIB_DECL
*yasm_operand_create_reg;
YASM_LIB_DECL
*yasm_operand_create_segreg;
YASM_LIB_DECL
*yasm_operand_create_mem;
YASM_LIB_DECL
*yasm_operand_create_imm;
*yasm_insn_ops_first;
yasm_insn_ops_first   STAILQ_FIRST(&((insn)->operands))
*yasm_insn_op_next;
yasm_insn_op_next      STAILQ_NEXT(cur, link)
YASM_LIB_DECL yasm_insn_operand *yasm_insn_ops_append
(yasm_insn *insn, yasm_insn_operand *op);
YASM_LIB_DECL
yasm_insn_add_prefix;
YASM_LIB_DECL
yasm_insn_add_seg_prefix;
YASM_LIB_DECL
yasm_insn_initialize;
YASM_LIB_DECL
yasm_insn_delete ( yasm_effaddr *));
YASM_LIB_DECL
yasm_insn_print;
YASM_LIB_DECL
yasm_insn_finalize;
