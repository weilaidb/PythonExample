#define all_var 1
#define all_var 0
extern const unsigned long kallsyms_addresses[] __attribute__((weak));
extern const u8 kallsyms_names[] __attribute__((weak));
extern const unsigned long kallsyms_num_syms
__attribute__((weak, section(".rodata")));
extern const u8 kallsyms_token_table[] __attribute__((weak));
extern const u16 kallsyms_token_index[] __attribute__((weak));
extern const unsigned long kallsyms_markers[] __attribute__((weak));
static inline int is_kernel_inittext(unsigned long addr)
static inline int is_kernel_text(unsigned long addr)
static inline int is_kernel(unsigned long addr)
static int is_ksym_addr(unsigned long addr)
static unsigned int kallsyms_expand_symbol(unsigned int off, char *result)
static char kallsyms_get_symbol_type(unsigned int off)
static unsigned int get_symbol_offset(unsigned long pos)
unsigned long kallsyms_lookup_name(const char *name)
EXPORT_SYMBOL_GPL(kallsyms_lookup_name);
int kallsyms_on_each_symbol(int (*fn)(void *, const char *, struct module *,
unsigned long),
void *data)
EXPORT_SYMBOL_GPL(kallsyms_on_each_symbol);
static unsigned long get_symbol_pos(unsigned long addr,
unsigned long *symbolsize,
unsigned long *offset)
int kallsyms_lookup_size_offset(unsigned long addr, unsigned long *symbolsize,
unsigned long *offset)
const char *kallsyms_lookup(unsigned long addr,
unsigned long *symbolsize,
unsigned long *offset,
char **modname, char *namebuf)
int lookup_symbol_name(unsigned long addr, char *symname)
int lookup_symbol_attrs(unsigned long addr, unsigned long *size,
unsigned long *offset, char *modname, char *name)
static int __sprint_symbol(char *buffer, unsigned long address,
int symbol_offset)
int sprint_symbol(char *buffer, unsigned long address)
EXPORT_SYMBOL_GPL(sprint_symbol);
int sprint_backtrace(char *buffer, unsigned long address)
void __print_symbol(const char *fmt, unsigned long address)
EXPORT_SYMBOL(__print_symbol);
struct kallsym_iter ;
static int get_ksymbol_mod(struct kallsym_iter *iter)
static unsigned long get_ksymbol_core(struct kallsym_iter *iter)
static void reset_iter(struct kallsym_iter *iter, loff_t new_pos)
static int update_iter(struct kallsym_iter *iter, loff_t pos)
static void *s_next(struct seq_file *m, void *p, loff_t *pos)
static void *s_start(struct seq_file *m, loff_t *pos)
static void s_stop(struct seq_file *m, void *p)
static int s_show(struct seq_file *m, void *p)
static const struct seq_operations kallsyms_op = ;
static int kallsyms_open(struct inode *inode, struct file *file)
const char *kdb_walk_kallsyms(loff_t *pos)
static const struct file_operations kallsyms_operations = ;
static int __init kallsyms_init(void)
device_initcall(kallsyms_init);
