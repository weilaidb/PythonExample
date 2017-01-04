#define DWARF_FRAME_MIN_REQ	2
#define DWARF_REG_MIN_REQ	(DWARF_FRAME_MIN_REQ * 4)
static struct kmem_cache *dwarf_frame_cachep;
static mempool_t *dwarf_frame_pool;
static struct kmem_cache *dwarf_reg_cachep;
static mempool_t *dwarf_reg_pool;
static struct rb_root cie_root;
static DEFINE_SPINLOCK(dwarf_cie_lock);
static struct rb_root fde_root;
static DEFINE_SPINLOCK(dwarf_fde_lock);
static struct dwarf_cie *cached_cie;
static unsigned int dwarf_unwinder_ready;
static struct dwarf_reg *dwarf_frame_alloc_reg(struct dwarf_frame *frame,
unsigned int reg_num)
static void dwarf_frame_free_regs(struct dwarf_frame *frame)
static struct dwarf_reg *dwarf_frame_reg(struct dwarf_frame *frame,
unsigned int reg_num)
static inline int dwarf_read_addr(unsigned long *src, unsigned long *dst)
static inline unsigned long dwarf_read_uleb128(char *addr, unsigned int *ret)
static inline unsigned long dwarf_read_leb128(char *addr, int *ret)
static int dwarf_read_encoded_value(char *addr, unsigned long *val,
char encoding)
static inline int dwarf_entry_len(char *addr, unsigned long *len)
static struct dwarf_cie *dwarf_lookup_cie(unsigned long cie_ptr)
struct dwarf_fde *dwarf_lookup_fde(unsigned long pc)
static int dwarf_cfa_execute_insns(unsigned char *insn_start,
unsigned char *insn_end,
struct dwarf_cie *cie,
struct dwarf_fde *fde,
struct dwarf_frame *frame,
unsigned long pc)
void dwarf_free_frame(struct dwarf_frame *frame)
extern void ret_from_irq(void);
struct dwarf_frame *dwarf_unwind_stack(unsigned long pc,
struct dwarf_frame *prev)
static int dwarf_parse_cie(void *entry, void *p, unsigned long len,
unsigned char *end, struct module *mod)
static int dwarf_parse_fde(void *entry, u32 entry_type,
void *start, unsigned long len,
unsigned char *end, struct module *mod)
static void dwarf_unwinder_dump(struct task_struct *task,
struct pt_regs *regs,
unsigned long *sp,
const struct stacktrace_ops *ops,
void *data)
static struct unwinder dwarf_unwinder = ;
static void dwarf_unwinder_cleanup(void)
static int dwarf_parse_section(char *eh_frame_start, char *eh_frame_end,
struct module *mod)
int module_dwarf_finalize(const Elf_Ehdr *hdr, const Elf_Shdr *sechdrs,
struct module *me)
void module_dwarf_cleanup(struct module *mod)
static int __init dwarf_unwinder_init(void)
early_initcall(dwarf_unwinder_init);
