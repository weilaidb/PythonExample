struct yasm_section ;
static void yasm_section_destroy( yasm_section *sect);
typedef struct yasm_directive_wrap  yasm_directive_wrap;
static void
dir_extern(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static void
dir_global(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static void
dir_common(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static void
dir_section(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams, unsigned long line)
static const yasm_directive object_directives[] = ;
static void
directive_level2_delete( void *data)
static void
directive_level1_delete( void *data)
static void
directives_add(yasm_object *object, const yasm_directive *dir)
yasm_object *
yasm_object_create(const char *src_filename, const char *obj_filename, yasm_arch *arch,
const yasm_objfmt_module *objfmt_module,
const yasm_dbgfmt_module *dbgfmt_module)
yasm_section *
yasm_object_get_general(yasm_object *object, const char *name,
unsigned long align, int code, int res_only,
int *isnew, unsigned long line)
int
yasm_object_directive(yasm_object *object, const char *name,
const char *parser, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams,
unsigned long line)
void
yasm_object_set_source_fn(yasm_object *object, const char *src_filename)
void
yasm_object_set_global_prefix(yasm_object *object, const char *prefix)
void
yasm_object_set_global_suffix(yasm_object *object, const char *suffix)
int
yasm_section_is_code(yasm_section *sect)
unsigned long
yasm_section_get_opt_flags(const yasm_section *sect)
void
yasm_section_set_opt_flags(yasm_section *sect, unsigned long opt_flags)
int
yasm_section_is_default(const yasm_section *sect)
void
yasm_section_set_default(yasm_section *sect, int def)
yasm_object *
yasm_section_get_object(const yasm_section *sect)
void *
yasm_section_get_data(yasm_section *sect,
const yasm_assoc_data_callback *callback)
void
yasm_section_add_data(yasm_section *sect,
const yasm_assoc_data_callback *callback, void *data)
void
yasm_object_destroy(yasm_object *object)
void
yasm_object_print(const yasm_object *object, FILE *f, int indent_level)
void
yasm_object_finalize(yasm_object *object, yasm_errwarns *errwarns)
int
yasm_object_sections_traverse(yasm_object *object, void *d,
int (*func) (yasm_section *sect, void *d))
yasm_section *
yasm_object_find_general(yasm_object *object, const char *name)
void
yasm_section_add_reloc(yasm_section *sect, yasm_reloc *reloc,
void (*destroy_func) ( void *reloc))
yasm_reloc *
yasm_section_relocs_first(yasm_section *sect)
#undef yasm_section_reloc_next yasm_reloc *
yasm_section_reloc_next(yasm_reloc *reloc)
void
yasm_reloc_get(yasm_reloc *reloc, yasm_intnum **addrp, yasm_symrec **symp)
yasm_bytecode *
yasm_section_bcs_first(yasm_section *sect)
yasm_bytecode *
yasm_section_bcs_last(yasm_section *sect)
yasm_bytecode *
yasm_section_bcs_append(yasm_section *sect, yasm_bytecode *bc)
int
yasm_section_bcs_traverse(yasm_section *sect, yasm_errwarns *errwarns, void *d,
int (*func) (yasm_bytecode *bc, void *d))
const char *
yasm_section_get_name(const yasm_section *sect)
void
yasm_section_set_align(yasm_section *sect, unsigned long align,
unsigned long line)
unsigned long
yasm_section_get_align(const yasm_section *sect)
static void
yasm_section_destroy(yasm_section *sect)
void
yasm_section_print(const yasm_section *sect, FILE *f, int indent_level,
int print_bcs)
typedef struct yasm_span yasm_span;
typedef struct yasm_offset_setter  yasm_offset_setter;
typedef struct yasm_span_term  yasm_span_term;
struct yasm_span ;
typedef struct optimize_data  optimize_data;
static yasm_span *
create_span(yasm_bytecode *bc, int id, const yasm_value *value,
long neg_thres, long pos_thres, yasm_offset_setter *os)
static void
optimize_add_span(void *add_span_data, yasm_bytecode *bc, int id,
const yasm_value *value, long neg_thres, long pos_thres)
static void
add_span_term(unsigned int subst, yasm_bytecode *precbc,
yasm_bytecode *precbc2, void *d)
static void
span_create_terms(yasm_span *span)
static int
recalc_normal_span(yasm_span *span)
static int
update_all_bc_offsets(yasm_object *object, yasm_errwarns *errwarns)
static void
span_destroy( yasm_span *span)
static void
optimize_cleanup(optimize_data *optd)
static void
optimize_itree_add(IntervalTree *itree, yasm_span *span, yasm_span_term *term)
static void
check_cycle(IntervalTreeNode *node, void *d)
static void
optimize_term_expand(IntervalTreeNode *node, void *d)
void
yasm_object_optimize(yasm_object *object, yasm_errwarns *errwarns)
