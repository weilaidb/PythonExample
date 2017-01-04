extern const struct bug_entry __start___bug_table[], __stop___bug_table[];
static inline unsigned long bug_addr(const struct bug_entry *bug)
static LIST_HEAD(module_bug_list);
static const struct bug_entry *module_find_bug(unsigned long bugaddr)
void module_bug_finalize(const Elf_Ehdr *hdr, const Elf_Shdr *sechdrs,
struct module *mod)
void module_bug_cleanup(struct module *mod)
static inline const struct bug_entry *module_find_bug(unsigned long bugaddr)
const struct bug_entry *find_bug(unsigned long bugaddr)
enum bug_trap_type report_bug(unsigned long bugaddr, struct pt_regs *regs)
