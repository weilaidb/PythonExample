#define YASM_DWARF2_DBGFMT_H
#define WITH_DWARF3 1
typedef struct  dwarf2_filename;
typedef struct yasm_dbgfmt_dwarf2  yasm_dbgfmt_dwarf2;
typedef struct dwarf2_loc  dwarf2_loc;
typedef struct dwarf2_section_data  dwarf2_section_data;
extern const yasm_assoc_data_callback yasm_dwarf2__section_data_cb;
yasm_bytecode *yasm_dwarf2__append_bc(yasm_section *sect, yasm_bytecode *bc); yasm_symrec *yasm_dwarf2__bc_sym(yasm_symtab *symtab,
yasm_bytecode *bc);
typedef struct dwarf2_head dwarf2_head;
dwarf2_head *yasm_dwarf2__add_head
(yasm_dbgfmt_dwarf2 *dbgfmt_dwarf2, yasm_section *sect, yasm_section *debug_ptr, int with_address, int with_segment);
void yasm_dwarf2__set_head_end(dwarf2_head *head, yasm_bytecode *end_prevbc);
yasm_section *yasm_dwarf2__generate_line
(yasm_object *object, yasm_linemap *linemap, yasm_errwarns *errwarns,
int asm_source, yasm_section **main_code, size_t *num_line_sections);
void yasm_dwarf2__dir_loc(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams,
unsigned long line);
void yasm_dwarf2__dir_file(yasm_object *object, yasm_valparamhead *valparams,
yasm_valparamhead *objext_valparams,
unsigned long line);
yasm_section *yasm_dwarf2__generate_aranges(yasm_object *object,
yasm_section *debug_info);
yasm_section *yasm_dwarf2__generate_pubnames(yasm_object *object,
yasm_section *debug_info);
yasm_section *yasm_dwarf2__generate_info
(yasm_object *object, yasm_section *debug_line, yasm_section *main_code);
