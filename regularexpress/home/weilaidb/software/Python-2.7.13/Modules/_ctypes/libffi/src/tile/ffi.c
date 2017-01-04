#define NUM_ARG_REGS 10
extern void ffi_call_tile(ffi_sarg reg_args[NUM_ARG_REGS],
const ffi_sarg *stack_args,
size_t stack_args_bytes,
void (*fnaddr)(void))
FFI_HIDDEN;
extern void ffi_closure_tile(void) FFI_HIDDEN;
ffi_status
ffi_prep_cif_machdep(ffi_cif *cif)
static long
assign_to_ffi_arg(ffi_sarg *out, void *in, const ffi_type *type,
int write_to_reg)
void
ffi_call(ffi_cif *cif, void (*fn)(void), void *rvalue, void **avalue)
extern const UINT64 ffi_template_tramp_tile[] FFI_HIDDEN;
ffi_status
ffi_prep_closure_loc (ffi_closure *closure,
ffi_cif *cif,
void (*fun)(ffi_cif*, void*, void**, void*),
void *user_data,
void *codeloc)
void FFI_HIDDEN
ffi_closure_tile_inner(ffi_closure *closure,
ffi_sarg reg_args[2][NUM_ARG_REGS],
ffi_sarg *stack_args)
