#define YASM_BYTECODE_H
#define YASM_LIB_DECL
typedef struct yasm_dataval yasm_dataval;
typedef struct yasm_datavalhead yasm_datavalhead; STAILQ_HEAD(yasm_datavalhead, yasm_dataval);
typedef void (*yasm_bc_add_span_func)
(void *add_span_data, yasm_bytecode *bc, int id, const yasm_value *value,
long neg_thres, long pos_thres);
typedef struct yasm_bytecode_callback  yasm_bytecode_callback;
struct yasm_bytecode ;
YASM_LIB_DECL yasm_bytecode *yasm_bc_create_common
( const yasm_bytecode_callback *callback, void *contents, unsigned long line);
YASM_LIB_DECL
void yasm_bc_transform(yasm_bytecode *bc,
const yasm_bytecode_callback *callback,
void *contents);
YASM_LIB_DECL
void yasm_bc_finalize_common(yasm_bytecode *bc, yasm_bytecode *prev_bc);
YASM_LIB_DECL
int yasm_bc_calc_len_common(yasm_bytecode *bc, yasm_bc_add_span_func add_span,
void *add_span_data);
YASM_LIB_DECL
int yasm_bc_expand_common
(yasm_bytecode *bc, int span, long old_val, long new_val, long *neg_thres, long *pos_thres);
YASM_LIB_DECL
int yasm_bc_tobytes_common
(yasm_bytecode *bc, unsigned char **bufp, unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
#define yasm_bc__next(bc)               STAILQ_NEXT(bc, link)
YASM_LIB_DECL
void yasm_bc_set_multiple(yasm_bytecode *bc, yasm_expr *e);
YASM_LIB_DECL yasm_bytecode *yasm_bc_create_data
(yasm_datavalhead *datahead, unsigned int size, int append_zero, yasm_arch *arch, unsigned long line);
YASM_LIB_DECL yasm_bytecode *yasm_bc_create_leb128
(yasm_datavalhead *datahead, int sign, unsigned long line);
YASM_LIB_DECL yasm_bytecode *yasm_bc_create_reserve
( yasm_expr *numitems, unsigned int itemsize,
unsigned long line);
YASM_LIB_DECL const yasm_expr *yasm_bc_reserve_numitems
(yasm_bytecode *bc, unsigned int *itemsize);
YASM_LIB_DECL yasm_bytecode *yasm_bc_create_incbin
( char *filename, yasm_expr *start, yasm_expr *maxlen, yasm_linemap *linemap,
unsigned long line);
YASM_LIB_DECL yasm_bytecode *yasm_bc_create_align
( yasm_expr *boundary, yasm_expr *fill, yasm_expr *maxskip, const unsigned char **code_fill, unsigned long line);
YASM_LIB_DECL yasm_bytecode *yasm_bc_create_org
(unsigned long start, unsigned long fill, unsigned long line);
YASM_LIB_DECL yasm_section *yasm_bc_get_section
(yasm_bytecode *bc);
YASM_LIB_DECL
void yasm_bc__add_symrec(yasm_bytecode *bc, yasm_symrec *sym);
YASM_LIB_DECL
void yasm_bc_destroy( yasm_bytecode *bc);
YASM_LIB_DECL
void yasm_bc_print(const yasm_bytecode *bc, FILE *f, int indent_level);
YASM_LIB_DECL
void yasm_bc_finalize(yasm_bytecode *bc, yasm_bytecode *prev_bc);
YASM_LIB_DECL yasm_intnum *yasm_calc_bc_dist
(yasm_bytecode *precbc1, yasm_bytecode *precbc2);
YASM_LIB_DECL
unsigned long yasm_bc_next_offset(yasm_bytecode *precbc);
YASM_LIB_DECL
int yasm_bc_elem_size(yasm_bytecode *bc);
YASM_LIB_DECL
int yasm_bc_calc_len(yasm_bytecode *bc, yasm_bc_add_span_func add_span,
void *add_span_data);
YASM_LIB_DECL
int yasm_bc_expand(yasm_bytecode *bc, int span, long old_val, long new_val, long *neg_thres, long *pos_thres);
YASM_LIB_DECL unsigned char *yasm_bc_tobytes
(yasm_bytecode *bc, unsigned char *buf, unsigned long *bufsize, int *gap, void *d, yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
YASM_LIB_DECL
int yasm_bc_get_multiple(yasm_bytecode *bc, long *multiple,
int calc_bc_dist);
YASM_LIB_DECL
const yasm_expr *yasm_bc_get_multiple_expr(const yasm_bytecode *bc);
YASM_LIB_DECL yasm_insn *yasm_bc_get_insn(yasm_bytecode *bc);
YASM_LIB_DECL
yasm_dataval *yasm_dv_create_expr( yasm_expr *expn);
YASM_LIB_DECL
yasm_dataval *yasm_dv_create_string( char *contents, size_t len);
YASM_LIB_DECL
yasm_dataval *yasm_dv_create_raw( unsigned char *contents,
unsigned long len);
YASM_LIB_DECL
yasm_dataval *yasm_dv_create_reserve(void);
#define yasm_dv_create_string(s, l) yasm_dv_create_raw((unsigned char *)(s), \
(unsigned long)(l))
YASM_LIB_DECL
yasm_value *yasm_dv_get_value(yasm_dataval *dv);
YASM_LIB_DECL
void yasm_dv_set_multiple(yasm_dataval *dv, yasm_expr *e);
YASM_LIB_DECL
int yasm_dv_get_multiple(yasm_dataval *dv, unsigned long *multiple);
void yasm_dvs_initialize(yasm_datavalhead *headp);
#define yasm_dvs_initialize(headp)      STAILQ_INIT(headp)
YASM_LIB_DECL
void yasm_dvs_delete(yasm_datavalhead *headp);
YASM_LIB_DECL yasm_dataval *yasm_dvs_append
(yasm_datavalhead *headp, yasm_dataval *dv);
YASM_LIB_DECL
void yasm_dvs_print(const yasm_datavalhead *headp, FILE *f, int indent_level);
