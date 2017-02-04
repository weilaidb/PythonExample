#define YASM_VALUE_H
#define YASM_LIB_DECL
YASM_LIB_DECL
yasm_value_initialize;
YASM_LIB_DECL
yasm_value_init_sym;
YASM_LIB_DECL
yasm_value_init_copy;
YASM_LIB_DECL
yasm_value_delete;
YASM_LIB_DECL
yasm_value_set_curpos_rel;
YASM_LIB_DECL
yasm_value_finalize;
YASM_LIB_DECL
yasm_value_finalize_expr;
YASM_LIB_DECL yasm_intnum *yasm_value_get_intnum
(yasm_value *value, yasm_bytecode *bc, int calc_bc_dist);
YASM_LIB_DECL
int yasm_value_output_basic
(yasm_value *value, unsigned char *buf, size_t destsize,
yasm_bytecode *bc, int warn, yasm_arch *arch);
YASM_LIB_DECL
yasm_value_print;
