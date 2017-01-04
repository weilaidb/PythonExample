#define KMSG_COMPONENT "extmem"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define DCSS_LOADSHR    0x00
#define DCSS_LOADNSR    0x04
#define DCSS_PURGESEG   0x08
#define DCSS_FINDSEG    0x0c
#define DCSS_LOADNOLY   0x10
#define DCSS_SEGEXT     0x18
#define DCSS_LOADSHRX	0x20
#define DCSS_LOADNSRX	0x24
#define DCSS_FINDSEGX	0x2c
#define DCSS_SEGEXTX	0x38
#define DCSS_FINDSEGA   0x0c
struct qrange ;
struct qout64 ;
struct qrange_old ;
struct qout64_old ;
struct qin64 ;
struct dcss_segment ;
static DEFINE_MUTEX(dcss_lock);
static LIST_HEAD(dcss_list);
static char *segtype_string[] = ;
static int loadshr_scode, loadnsr_scode, findseg_scode;
static int segext_scode, purgeseg_scode;
static int scode_set;
static int
dcss_set_subcodes(void)
static void
dcss_mkname(char *name, char *dcss_name)
static struct dcss_segment *
segment_by_name (char *name)
static inline int
dcss_diag(int *func, void *parameter,
unsigned long *ret1, unsigned long *ret2)
static inline int
dcss_diag_translate_rc (int vm_rc)
static int
query_segment_type (struct dcss_segment *seg)
int
segment_type (char* name)
static int
segment_overlaps_others (struct dcss_segment *seg)
static int
__segment_load (char *name, int do_nonshared, unsigned long *addr, unsigned long *end)
int
segment_load (char *name, int do_nonshared, unsigned long *addr,
unsigned long *end)
int
segment_modify_shared (char *name, int do_nonshared)
void
segment_unload(char *name)
void
segment_save(char *name)
void segment_warning(int rc, char *seg_name)
EXPORT_SYMBOL(segment_load);
EXPORT_SYMBOL(segment_unload);
EXPORT_SYMBOL(segment_save);
EXPORT_SYMBOL(segment_type);
EXPORT_SYMBOL(segment_modify_shared);
EXPORT_SYMBOL(segment_warning);
