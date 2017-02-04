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
yasm_bc_transform;
YASM_LIB_DECL
yasm_bc_finalize_common;
YASM_LIB_DECL
yasm_bc_calc_len_common;
YASM_LIB_DECL
int yasm_bc_expand_common
(yasm_bytecode *bc, int span, long old_val, long new_val, long *neg_thres, long *pos_thres);
YASM_LIB_DECL
int yasm_bc_tobytes_common
(yasm_bytecode *bc, unsigned char **bufp, unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
yasm_bc__next               STAILQ_NEXT(bc, link)
YASM_LIB_DECL
yasm_bc_set_multiple;
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
yasm_bc__add_symrec;
YASM_LIB_DECL
yasm_bc_destroy;
YASM_LIB_DECL
yasm_bc_print;
YASM_LIB_DECL
yasm_bc_finalize;
YASM_LIB_DECL yasm_intnum *yasm_calc_bc_dist
(yasm_bytecode *precbc1, yasm_bytecode *precbc2);
YASM_LIB_DECL
yasm_bc_next_offset;
YASM_LIB_DECL
yasm_bc_elem_size;
YASM_LIB_DECL
yasm_bc_calc_len;
YASM_LIB_DECL
yasm_bc_expand;
YASM_LIB_DECL unsigned char *yasm_bc_tobytes
(yasm_bytecode *bc, unsigned char *buf, unsigned long *bufsize, int *gap, void *d, yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
YASM_LIB_DECL
yasm_bc_get_multiple;
YASM_LIB_DECL
*yasm_bc_get_multiple_expr;
*yasm_bc_get_insn;
YASM_LIB_DECL
*yasm_dv_create_expr;
YASM_LIB_DECL
*yasm_dv_create_string;
YASM_LIB_DECL
*yasm_dv_create_raw;
YASM_LIB_DECL
*yasm_dv_create_reserve;
yasm_dv_create_string yasm_dv_create_raw((unsigned char *)(s), \
(unsigned long)(l))
YASM_LIB_DECL
*yasm_dv_get_value;
YASM_LIB_DECL
yasm_dv_set_multiple;
YASM_LIB_DECL
yasm_dv_get_multiple;
yasm_dvs_initialize;
yasm_dvs_initialize      STAILQ_INIT(headp)
YASM_LIB_DECL
yasm_dvs_delete;
YASM_LIB_DECL yasm_dataval *yasm_dvs_append
(yasm_datavalhead *headp, yasm_dataval *dv);
YASM_LIB_DECL
yasm_dvs_print;
