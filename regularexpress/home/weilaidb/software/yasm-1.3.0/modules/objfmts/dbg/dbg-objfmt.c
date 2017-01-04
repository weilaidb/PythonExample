typedef struct yasm_objfmt_dbg  yasm_objfmt_dbg;
yasm_objfmt_module yasm_dbg_LTX_objfmt;
static yasm_objfmt *
dbg_objfmt_create(yasm_object *object)
static void
dbg_objfmt_output(yasm_object *object, FILE *f, int all_syms,
yasm_errwarns *errwarns)
static void
dbg_objfmt_destroy(yasm_objfmt *objfmt)
static void
dbg_objfmt_init_new_section(yasm_section *sect, unsigned long line)
static yasm_section *
dbg_objfmt_add_default_section(yasm_object *object)
static yasm_section *
dbg_objfmt_section_switch(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams,
unsigned long line)
static yasm_symrec *
dbg_objfmt_get_special_sym(yasm_object *object, const char *name,
const char *parser)
static const char *dbg_objfmt_dbgfmt_keywords[] = ;
yasm_objfmt_module yasm_dbg_LTX_objfmt = ;
