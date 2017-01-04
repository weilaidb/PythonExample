int kdbgetsymval(const char *symname, kdb_symtab_t *symtab)
EXPORT_SYMBOL(kdbgetsymval);
static char *kdb_name_table[100];
int kdbnearsym(unsigned long addr, kdb_symtab_t *symtab)
void kdbnearsym_cleanup(void)
static char ks_namebuf[KSYM_NAME_LEN+1], ks_namebuf_prev[KSYM_NAME_LEN+1];
int kallsyms_symbol_complete(char *prefix_name, int max_len)
int kallsyms_symbol_next(char *prefix_name, int flag)
void kdb_symbol_print(unsigned long addr, const kdb_symtab_t *symtab_p,
unsigned int punc)
char *kdb_strdup(const char *str, gfp_t type)
int kdb_getarea_size(void *res, unsigned long addr, size_t size)
int kdb_putarea_size(unsigned long addr, void *res, size_t size)
static int kdb_getphys(void *res, unsigned long addr, size_t size)
int kdb_getphysword(unsigned long *word, unsigned long addr, size_t size)
int kdb_getword(unsigned long *word, unsigned long addr, size_t size)
int kdb_putword(unsigned long addr, unsigned long word, size_t size)
#define UNRUNNABLE	(1UL << (8*sizeof(unsigned long) - 1))
#define RUNNING		(1UL << (8*sizeof(unsigned long) - 2))
#define IDLE		(1UL << (8*sizeof(unsigned long) - 3))
#define DAEMON		(1UL << (8*sizeof(unsigned long) - 4))
unsigned long kdb_task_state_string(const char *s)
char kdb_task_state_char (const struct task_struct *p)
unsigned long kdb_task_state(const struct task_struct *p, unsigned long mask)
void kdb_print_nameval(const char *name, unsigned long val)
struct debug_alloc_header ;
#define dah_align 8
#define dah_overhead ALIGN(sizeof(struct debug_alloc_header), dah_align)
static u64 debug_alloc_pool_aligned[256*1024/dah_align];
static char *debug_alloc_pool = (char *)debug_alloc_pool_aligned;
static u32 dah_first, dah_first_call = 1, dah_used, dah_used_max;
static DEFINE_SPINLOCK(dap_lock);
static int get_dap_lock(void)
__acquires(dap_lock)
void *debug_kmalloc(size_t size, gfp_t flags)
void debug_kfree(void *p)
void debug_kusage(void)
static int kdb_flags_stack[4], kdb_flags_index;
void kdb_save_flags(void)
void kdb_restore_flags(void)
