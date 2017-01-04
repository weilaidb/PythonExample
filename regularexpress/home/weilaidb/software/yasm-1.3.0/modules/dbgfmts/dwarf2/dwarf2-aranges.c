static void
dwarf2_append_arange(yasm_section *debug_aranges, yasm_expr *start, yasm_expr *length, unsigned int sizeof_address)
typedef struct dwarf2_aranges_info  dwarf2_aranges_info;
static int
dwarf2_generate_aranges_section(yasm_section *sect, void *d)
yasm_section *
yasm_dwarf2__generate_aranges(yasm_object *object, yasm_section *debug_info)
