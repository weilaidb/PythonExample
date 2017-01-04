enum cv_reservedtype ;
enum cv_leaftype ;
typedef struct cv_leaf  cv_leaf;
typedef struct cv_type  cv_type;
static void cv_type_bc_destroy(void *contents);
static void cv_type_bc_print(const void *contents, FILE *f, int indent_level);
static int cv_type_bc_calc_len
(yasm_bytecode *bc, yasm_bc_add_span_func add_span, void *add_span_data);
static int cv_type_bc_tobytes
(yasm_bytecode *bc, unsigned char **bufp, unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
static const yasm_bytecode_callback cv_type_bc_callback = ;
static cv_type *cv_type_create(unsigned long indx);
static void cv_type_append_leaf(cv_type *type, cv_leaf *leaf);
static cv_leaf *
cv_leaf_create_label(int is_far)
yasm_section *
yasm_cv__generate_type(yasm_object *object)
static void
cv_leaf_destroy(cv_leaf *leaf)
static unsigned long
cv_leaf_size(const cv_leaf *leaf)
static void
cv_leaf_tobytes(const cv_leaf *leaf, yasm_bytecode *bc, yasm_arch *arch,
unsigned char **bufp, yasm_intnum *cval)
static cv_type *
cv_type_create(unsigned long indx)
static void
cv_type_append_leaf(cv_type *type, cv_leaf *leaf)
static void
cv_type_bc_destroy(void *contents)
static void
cv_type_bc_print(const void *contents, FILE *f, int indent_level)
static int
cv_type_bc_calc_len(yasm_bytecode *bc, yasm_bc_add_span_func add_span,
void *add_span_data)
static int
cv_type_bc_tobytes(yasm_bytecode *bc, unsigned char **bufp,
unsigned char *bufstart, void *d,
yasm_output_value_func output_value,
yasm_output_reloc_func output_reloc)
