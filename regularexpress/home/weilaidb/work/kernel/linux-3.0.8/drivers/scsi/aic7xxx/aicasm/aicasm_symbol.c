static DB *symtable;
symbol_t *
symbol_create(char *name)
void
symbol_delete(symbol_t *symbol)
void
symtable_open()
void
symtable_close()
symbol_t *
symtable_get(char *name)
symbol_node_t *
symlist_search(symlist_t *symlist, char *symname)
void
symlist_add(symlist_t *symlist, symbol_t *symbol, int how)
void
symlist_free(symlist_t *symlist)
void
symlist_merge(symlist_t *symlist_dest, symlist_t *symlist_src1,
symlist_t *symlist_src2)
void
aic_print_file_prologue(FILE *ofile)
void
aic_print_include(FILE *dfile, char *include_file)
void
aic_print_reg_dump_types(FILE *ofile)
static void
aic_print_reg_dump_start(FILE *dfile, symbol_node_t *regnode)
static void
aic_print_reg_dump_entry(FILE *dfile, symbol_node_t *curnode)
void
symtable_dump(FILE *ofile, FILE *dfile)
