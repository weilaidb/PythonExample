extern void ffi_closure_ASM (void);
enum ;
enum ;
enum ;
#if defined(POWERPC_DARWIN64)
static void
darwin64_pass_struct_by_value
(ffi_type *, char *, unsigned, unsigned *, double **, unsigned long **);
void
ffi_prep_args (extended_cif *ecif, unsigned long *const stack)
#if defined(POWERPC_DARWIN64)
static void
darwin64_scan_struct_for_floats (ffi_type *s, unsigned *nfpr)
static int
darwin64_struct_size_exceeds_gprs_p (ffi_type *s, char *src, unsigned *nfpr)
int
darwin64_struct_ret_by_value_p (ffi_type *s)
void
darwin64_pass_struct_floats (ffi_type *s, char *src,
unsigned *nfpr, double **fprs)
static void
darwin64_pass_struct_by_value (ffi_type *s, char *src, unsigned size,
unsigned *nfpr, double **fprs, unsigned long **arg)
double *
darwin64_struct_floats_to_mem (ffi_type *s, char *dest, double *fprs, unsigned *nf)
static void
darwin_adjust_aggregate_sizes (ffi_type *s)
static void
aix_adjust_aggregate_sizes (ffi_type *s)
ffi_status
ffi_prep_cif_machdep (ffi_cif *cif)
extern void ffi_call_AIX(extended_cif *, long, unsigned, unsigned *,
void (*fn)(void), void (*fn2)(void));
extern void ffi_call_DARWIN(extended_cif *, long, unsigned, unsigned *,
void (*fn)(void), void (*fn2)(void), ffi_type*);
void
ffi_call (ffi_cif *cif, void (*fn)(void), void *rvalue, void **avalue)
static void flush_icache(char *);
static void flush_range(char *, int);
typedef struct aix_fd_struct  aix_fd;
ffi_status
ffi_prep_closure_loc (ffi_closure* closure,
ffi_cif* cif,
void (*fun)(ffi_cif*, void*, void**, void*),
void *user_data,
void *codeloc)
static void
flush_icache(char *addr)
static void
flush_range(char * addr1, int size)
typedef union
ffi_dblfl;
ffi_type *
ffi_closure_helper_DARWIN (ffi_closure *, void *,
unsigned long *, ffi_dblfl *);
ffi_type *
ffi_closure_helper_DARWIN (ffi_closure *closure, void *rvalue,
unsigned long *pgr, ffi_dblfl *pfr)
