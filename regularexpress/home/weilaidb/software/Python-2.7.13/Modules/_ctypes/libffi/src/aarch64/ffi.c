#if defined (__APPLE__)
#define AARCH64_STACK_ALIGN 1
#define AARCH64_STACK_ALIGN 16
#define N_X_ARG_REG 8
#define N_V_ARG_REG 8
#define AARCH64_FFI_WITH_V (1 << AARCH64_FFI_WITH_V_BIT)
union _d
;
struct call_context
;
#if defined (__clang__) && defined (__APPLE__)
extern void
sys_icache_invalidate (void *start, size_t len);
static inline void
ffi_clear_cache (void *start, void *end)
static void *
get_x_addr (struct call_context *context, unsigned n)
static void *
get_s_addr (struct call_context *context, unsigned n)
static void *
get_d_addr (struct call_context *context, unsigned n)
static void *
get_v_addr (struct call_context *context, unsigned n)
static void *
get_basic_type_addr (unsigned short type, struct call_context *context,
unsigned n)
static size_t
get_basic_type_alignment (unsigned short type)
static size_t
get_basic_type_size (unsigned short type)
extern void
ffi_call_SYSV (unsigned (*)(struct call_context *context, unsigned char *,
extended_cif *),
struct call_context *context,
extended_cif *,
size_t,
void (*fn)(void));
extern void
ffi_closure_SYSV (ffi_closure *);
static unsigned
is_floating_type (unsigned short type)
static unsigned short
get_homogeneous_type (ffi_type *ty)
static unsigned
element_count (ffi_type *ty)
static int
is_hfa (ffi_type *ty)
static int
is_register_candidate (ffi_type *ty)
static int
is_v_register_candidate (ffi_type *ty)
struct arg_state
;
static void
arg_init (struct arg_state *state, size_t call_frame_size)
static unsigned
available_x (struct arg_state *state)
static unsigned
available_v (struct arg_state *state)
static void *
allocate_to_x (struct call_context *context, struct arg_state *state)
static void *
allocate_to_s (struct call_context *context, struct arg_state *state)
static void *
allocate_to_d (struct call_context *context, struct arg_state *state)
static void *
allocate_to_v (struct call_context *context, struct arg_state *state)
static void *
allocate_to_stack (struct arg_state *state, void *stack, size_t alignment,
size_t size)
static void
copy_basic_type (void *dest, void *source, unsigned short type)
static void
copy_hfa_to_reg_or_stack (void *memory,
ffi_type *ty,
struct call_context *context,
unsigned char *stack,
struct arg_state *state)
static void *
allocate_to_register_or_stack (struct call_context *context,
unsigned char *stack,
struct arg_state *state,
unsigned short type)
static void
copy_to_register_or_stack (struct call_context *context,
unsigned char *stack,
struct arg_state *state,
void *value,
unsigned short type)
static unsigned
aarch64_prep_args (struct call_context *context, unsigned char *stack,
extended_cif *ecif)
ffi_status
ffi_prep_cif_machdep (ffi_cif *cif)
#if defined (__APPLE__)
ffi_status ffi_prep_cif_machdep_var(ffi_cif *cif,
unsigned int nfixedargs,
unsigned int ntotalargs)
void
ffi_call (ffi_cif *cif, void (*fn)(void), void *rvalue, void **avalue)
static unsigned char trampoline [] =
;
#define FFI_INIT_TRAMPOLINE(TRAMP,FUN,CTX,FLAGS)			\
()
ffi_status
ffi_prep_closure_loc (ffi_closure* closure,
ffi_cif* cif,
void (*fun)(ffi_cif*,void*,void**,void*),
void *user_data,
void *codeloc)
void FFI_HIDDEN
ffi_closure_SYSV_inner (ffi_closure *closure, struct call_context *context,
void *stack)
