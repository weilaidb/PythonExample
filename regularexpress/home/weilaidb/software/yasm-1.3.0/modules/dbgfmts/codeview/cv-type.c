enum cv_reservedtype ;
enum cv_leaftype ;
typedef struct cv_leaf  cv_leaf;
typedef struct cv_type  cv_type;
cv_type_bc_destroy;
cv_type_bc_print;
static int cv_type_bc_calc_len
(yasm_bytecode *bc, yasm_bc_add_span_func add_span, void *add_span_data);
static int cv_type_bc_tobytes
(yasm_bytecode *bc, unsigned char **bufp, unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
static const yasm_bytecode_callback cv_type_bc_callback = ;
*cv_type_create;
cv_type_append_leaf;
cv_leaf_create_label
yasm_cv__generate_type
cv_leaf_destroy
cv_leaf_size
cv_leaf_tobytes
cv_type_create
cv_type_append_leaf
cv_type_bc_destroy
cv_type_bc_print
cv_type_bc_calc_len
cv_type_bc_tobytes
