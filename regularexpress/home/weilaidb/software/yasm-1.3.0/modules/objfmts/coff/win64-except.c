#define UNW_FLAG_EHANDLER   0x01
#define UNW_FLAG_UHANDLER   0x02
#define UNW_FLAG_CHAININFO  0x04
win64_uwinfo_bc_destroy;
win64_uwinfo_bc_print;
win64_uwinfo_bc_finalize;
static int win64_uwinfo_bc_calc_len
(yasm_bytecode *bc, yasm_bc_add_span_func add_span, void *add_span_data);
win64_uwinfo_bc_expand;
static int win64_uwinfo_bc_tobytes
(yasm_bytecode *bc, unsigned char **bufp, unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
win64_uwcode_bc_destroy;
win64_uwcode_bc_print;
win64_uwcode_bc_finalize;
static int win64_uwcode_bc_calc_len
(yasm_bytecode *bc, yasm_bc_add_span_func add_span, void *add_span_data);
win64_uwcode_bc_expand;
static int win64_uwcode_bc_tobytes
(yasm_bytecode *bc, unsigned char **bufp, unsigned char *bufstart, void *d,
yasm_output_value_func output_value, yasm_output_reloc_func output_reloc);
static const yasm_bytecode_callback win64_uwinfo_bc_callback = ;
static const yasm_bytecode_callback win64_uwcode_bc_callback = ;
yasm_win64__uwinfo_create
yasm_win64__uwinfo_destroy
yasm_win64__unwind_generate
win64_uwinfo_bc_destroy
win64_uwinfo_bc_print
win64_uwinfo_bc_finalize
win64_uwinfo_bc_calc_len
win64_uwinfo_bc_expand
win64_uwinfo_bc_tobytes
win64_uwcode_bc_destroy
win64_uwcode_bc_print
win64_uwcode_bc_finalize
win64_uwcode_bc_calc_len
win64_uwcode_bc_expand
win64_uwcode_bc_tobytes
