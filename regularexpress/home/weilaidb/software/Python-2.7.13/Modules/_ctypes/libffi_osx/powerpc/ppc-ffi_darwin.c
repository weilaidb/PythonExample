#if defined(__ppc__) || defined(__ppc64__)
extern void sys_icache_invalidate(void *start, size_t len);
extern void ffi_closure_ASM(void);
typedef struct aix_fd_struct  aix_fd;
void
ffi_prep_args(
extended_cif*	inEcif,
unsigned *const	stack)
#if defined(__ppc64__)
bool
ffi64_struct_contains_fp(
const ffi_type*	inType)
ffi_status
ffi_prep_cif_machdep(
ffi_cif*	cif)
extern void
ffi_call_AIX(	extended_cif*,
unsigned,
unsigned,	unsigned*,
void (*fn)(void),
void (*fn2)(extended_cif*, unsigned *const));
extern void
ffi_call_DARWIN(	extended_cif*,
unsigned long,
unsigned,	unsigned*,
void (*fn)(void),
void (*fn2)(extended_cif*, unsigned *const));
void
ffi_call(	ffi_cif*	cif,
void		(*fn)(void),		void*		rvalue,	void**		avalue)
#if !defined(POWERPC_DARWIN)
#define MIN_LINE_SIZE 32
static void
flush_icache(
char*	addr)
static void
flush_range(
char*	addr,
int		size)
ffi_status
ffi_prep_closure(
ffi_closure*	closure,
ffi_cif*		cif,
void			(*fun)(ffi_cif*, void*, void**, void*),
void*			user_data)
#if defined(__ppc__)
typedef double ldbits[2];
typedef union
ldu;
typedef union
ffi_dblfl;
int
ffi_closure_helper_DARWIN(
ffi_closure*	closure,
void*			rvalue,
unsigned long*	pgr,
ffi_dblfl*		pfr)
#if defined(__ppc64__)
void
ffi64_struct_to_ram_form(
const ffi_type*	inType,
const char*		inGPRs,
unsigned int*	ioGPRMarker,
const char*		inFPRs,
unsigned int*	ioFPRMarker,
unsigned int*	ioFPRsUsed,
char*			outStruct,
unsigned int*	ioStructMarker)
void
ffi64_struct_to_reg_form(
const ffi_type*	inType,
const char*		inStruct,
unsigned int*	ioStructMarker,
unsigned int*	ioFPRsUsed,
char*			outGPRs,
unsigned int*	ioGPRSize,
char*			outFPRs,
unsigned int*	ioFPRSize)
bool
ffi64_stret_needs_ptr(
const ffi_type*	inType,
unsigned short*	ioGPRCount,
unsigned short*	ioFPRCount)
unsigned int
ffi64_data_size(
const ffi_type*	inType)
