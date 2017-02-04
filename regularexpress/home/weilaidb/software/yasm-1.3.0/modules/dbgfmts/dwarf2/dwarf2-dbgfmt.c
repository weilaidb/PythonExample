struct dwarf2_head ;
dwarf2_head_bc_destroy;
dwarf2_head_bc_print;
static int dwarf2_head_bc_calc_len
(yasm_bytecode *bc, yasm_bc_add_span_func add_span, void *add_span_data);
static int dwarf2_head_bc_tobytes
(yasm_bytecode *bc, unsigned char **bufp, unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
static const yasm_bytecode_callback dwarf2_head_bc_callback = ;
dwarf2_section_data_destroy;
dwarf2_section_data_print;
const yasm_assoc_data_callback yasm_dwarf2__section_data_cb = ;
yasm_dbgfmt_module yasm_dwarf2_LTX_dbgfmt;
dwarf2_dbgfmt_create
dwarf2_dbgfmt_destroy
yasm_dwarf2__append_bc
dwarf2_dbgfmt_generate
yasm_dwarf2__bc_sym
dwarf2_head *
yasm_dwarf2__add_head
(yasm_dbgfmt_dwarf2 *dbgfmt_dwarf2, yasm_section *sect, yasm_section *debug_ptr, int with_address, int with_segment)
yasm_dwarf2__set_head_end
dwarf2_head_bc_destroy
dwarf2_head_bc_print
dwarf2_head_bc_calc_len
dwarf2_head_bc_tobytes
dwarf2_section_data_destroy
dwarf2_section_data_print
static const yasm_directive dwarf2_directives[] = ;
yasm_dbgfmt_module yasm_dwarf2_LTX_dbgfmt = ;
