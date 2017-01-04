#define _LINUX_KALLSYMS_H
#define KSYM_NAME_LEN 128
#define KSYM_SYMBOL_LEN (sizeof("%s+%#lx/%#lx [%s]") + (KSYM_NAME_LEN - 1) + \
2*(BITS_PER_LONG*3/10) + (MODULE_NAME_LEN - 1) + 1)
struct module;
unsigned long kallsyms_lookup_name(const char *name);
int kallsyms_on_each_symbol(int (*fn)(void *, const char *, struct module *,
unsigned long),
void *data);
extern int kallsyms_lookup_size_offset(unsigned long addr,
unsigned long *symbolsize,
unsigned long *offset);
const char *kallsyms_lookup(unsigned long addr,
unsigned long *symbolsize,
unsigned long *offset,
char **modname, char *namebuf);
extern int sprint_symbol(char *buffer, unsigned long address);
extern int sprint_backtrace(char *buffer, unsigned long address);
extern void __print_symbol(const char *fmt, unsigned long address);
int lookup_symbol_name(unsigned long addr, char *symname);
int lookup_symbol_attrs(unsigned long addr, unsigned long *size, unsigned long *offset, char *modname, char *name);
static inline unsigned long kallsyms_lookup_name(const char *name)
static inline int kallsyms_on_each_symbol(int (*fn)(void *, const char *,
struct module *,
unsigned long),
void *data)
static inline int kallsyms_lookup_size_offset(unsigned long addr,
unsigned long *symbolsize,
unsigned long *offset)
static inline const char *kallsyms_lookup(unsigned long addr,
unsigned long *symbolsize,
unsigned long *offset,
char **modname, char *namebuf)
static inline int sprint_symbol(char *buffer, unsigned long addr)
static inline int sprint_backtrace(char *buffer, unsigned long addr)
static inline int lookup_symbol_name(unsigned long addr, char *symname)
static inline int lookup_symbol_attrs(unsigned long addr, unsigned long *size, unsigned long *offset, char *modname, char *name)
#define __print_symbol(fmt, addr)
static void __check_printsym_format(const char *fmt, ...)
__attribute__((format(printf,1,2)));
static inline void __check_printsym_format(const char *fmt, ...)
static inline void print_symbol(const char *fmt, unsigned long addr)
static inline void print_ip_sym(unsigned long ip)
