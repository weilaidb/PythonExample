#define MAX_GPR_REGS 6
#define MAX_SSE_REGS 8
typedef struct RegisterArgs  RegisterArgs;
extern void
ffi_call_unix64(
void*			args,
unsigned long	bytes,
unsigned		flags,
void*			raddr,
void			(*fnaddr)(),
unsigned		ssecount);
enum x86_64_reg_class
;
#define MAX_CLASSES 4
#define SSE_CLASS_P(X)	((X) >= X86_64_SSE_CLASS && X <= X86_64_SSEUP_CLASS)
static enum x86_64_reg_class
merge_classes(
enum x86_64_reg_class	class1,
enum x86_64_reg_class	class2)
static int
classify_argument(
ffi_type*				type,
enum x86_64_reg_class	classes[],
size_t					byte_offset)
static int
examine_argument(
ffi_type*				type,
enum x86_64_reg_class	classes[MAX_CLASSES],
_Bool					in_return,
int*					pngpr,
int*					pnsse)
ffi_status
ffi_prep_cif_machdep(
ffi_cif*	cif)
void
ffi_call(
ffi_cif*	cif,
void		(*fn)(),
void*		rvalue,
void**		avalue)
extern void ffi_closure_unix64(void);
ffi_status
ffi_prep_closure(
ffi_closure*	closure,
ffi_cif*		cif,
void			(*fun)(ffi_cif*, void*, void**, void*),
void*			user_data)
int
ffi_closure_unix64_inner(
ffi_closure*	closure,
void*			rvalue,
RegisterArgs*	reg_args,
char*			argp)
