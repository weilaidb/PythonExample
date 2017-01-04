static int vfp_type_p (ffi_type *);
static void layout_vfp_args (ffi_cif *);
int ffi_prep_args_SYSV(char *stack, extended_cif *ecif, float *vfp_space);
int ffi_prep_args_VFP(char *stack, extended_cif *ecif, float *vfp_space);
static char* ffi_align(ffi_type **p_arg, char *argp)
static size_t ffi_put_arg(ffi_type **arg_type, void **arg, char *stack)
int ffi_prep_args_SYSV(char *stack, extended_cif *ecif, float *vfp_space)
int ffi_prep_args_VFP(char *stack, extended_cif *ecif, float *vfp_space)
ffi_status ffi_prep_cif_machdep(ffi_cif *cif)
ffi_status ffi_prep_cif_machdep_var(ffi_cif *cif,
unsigned int nfixedargs,
unsigned int ntotalargs)
extern void ffi_call_SYSV (void (*fn)(void), extended_cif *, unsigned, unsigned, unsigned *);
extern void ffi_call_VFP (void (*fn)(void), extended_cif *, unsigned, unsigned, unsigned *);
void ffi_call(ffi_cif *cif, void (*fn)(void), void *rvalue, void **avalue)
static void ffi_prep_incoming_args_SYSV (char *stack, void **ret,
void** args, ffi_cif* cif, float *vfp_stack);
static void ffi_prep_incoming_args_VFP (char *stack, void **ret,
void** args, ffi_cif* cif, float *vfp_stack);
void ffi_closure_SYSV (ffi_closure *);
void ffi_closure_VFP (ffi_closure *);
unsigned int FFI_HIDDEN
ffi_closure_inner (ffi_closure *closure,
void **respp, void *args, void *vfp_args)
static void
ffi_prep_incoming_args_SYSV(char *stack, void **rvalue,
void **avalue, ffi_cif *cif,
float *vfp_stack)
static void
ffi_prep_incoming_args_VFP(char *stack, void **rvalue,
void **avalue, ffi_cif *cif,
float *vfp_stack)
extern unsigned int ffi_arm_trampoline[3];
#if FFI_EXEC_TRAMPOLINE_TABLE
extern void *ffi_closure_trampoline_table_page;
typedef struct ffi_trampoline_table ffi_trampoline_table;
typedef struct ffi_trampoline_table_entry ffi_trampoline_table_entry;
struct ffi_trampoline_table ;
struct ffi_trampoline_table_entry ;
#undef FFI_TRAMPOLINE_SIZE
#define FFI_TRAMPOLINE_SIZE 12
#define FFI_TRAMPOLINE_CODELOC_CONFIG(codeloc) ((void **) (((uint8_t *) codeloc) - 4080));
#define FFI_TRAMPOLINE_CONFIG_PAGE_OFFSET 16
#define FFI_TRAMPOLINE_COUNT ((PAGE_SIZE - FFI_TRAMPOLINE_CONFIG_PAGE_OFFSET) / FFI_TRAMPOLINE_SIZE)
static pthread_mutex_t ffi_trampoline_lock = PTHREAD_MUTEX_INITIALIZER;
static ffi_trampoline_table *ffi_trampoline_tables = NULL;
static ffi_trampoline_table *
ffi_trampoline_table_alloc ()
void *
ffi_closure_alloc (size_t size, void **code)
void
ffi_closure_free (void *ptr)
#define FFI_INIT_TRAMPOLINE(TRAMP,FUN,CTX)				\
()
ffi_status
ffi_prep_closure_loc (ffi_closure* closure,
ffi_cif* cif,
void (*fun)(ffi_cif*,void*,void**,void*),
void *user_data,
void *codeloc)
static int rec_vfp_type_p (ffi_type *t, int *elt, int *elnum)
static int vfp_type_p (ffi_type *t)
static int place_vfp_arg (ffi_cif *cif, ffi_type *t)
static void layout_vfp_args (ffi_cif *cif)
