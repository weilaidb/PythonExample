#define YASM_VALUE_H
#define YASM_LIB_DECL
YASM_LIB_DECL
void yasm_value_initialize( yasm_value *value, yasm_expr *e,
unsigned int size);
YASM_LIB_DECL
void yasm_value_init_sym( yasm_value *value, yasm_symrec *sym, unsigned int size);
YASM_LIB_DECL
void yasm_value_init_copy(yasm_value *value, const yasm_value *orig);
YASM_LIB_DECL
void yasm_value_delete(yasm_value *value);
YASM_LIB_DECL
void yasm_value_set_curpos_rel(yasm_value *value, yasm_bytecode *bc,
unsigned int ip_rel);
YASM_LIB_DECL
int yasm_value_finalize(yasm_value *value, yasm_bytecode *precbc);
YASM_LIB_DECL
int yasm_value_finalize_expr( yasm_value *value, yasm_expr *e, yasm_bytecode *precbc,
unsigned int size);
YASM_LIB_DECL yasm_intnum *yasm_value_get_intnum
(yasm_value *value, yasm_bytecode *bc, int calc_bc_dist);
YASM_LIB_DECL
int yasm_value_output_basic
(yasm_value *value, unsigned char *buf, size_t destsize,
yasm_bytecode *bc, int warn, yasm_arch *arch);
YASM_LIB_DECL
void yasm_value_print(const yasm_value *value, FILE *f, int indent_level);
