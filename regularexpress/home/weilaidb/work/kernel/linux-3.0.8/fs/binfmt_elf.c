static int load_elf_binary(struct linux_binprm *bprm, struct pt_regs *regs);
static int load_elf_library(struct file *);
static unsigned long elf_map(struct file *, unsigned long, struct elf_phdr *,
int, int, unsigned long);
static int elf_core_dump(struct coredump_params *cprm);
#define elf_core_dump	NULL
#if ELF_EXEC_PAGESIZE > PAGE_SIZE
#define ELF_MIN_ALIGN	ELF_EXEC_PAGESIZE
#define ELF_MIN_ALIGN	PAGE_SIZE
#define ELF_CORE_EFLAGS	0
#define ELF_PAGESTART(_v) ((_v) & ~(unsigned long)(ELF_MIN_ALIGN-1))
#define ELF_PAGEOFFSET(_v) ((_v) & (ELF_MIN_ALIGN-1))
#define ELF_PAGEALIGN(_v) (((_v) + ELF_MIN_ALIGN - 1) & ~(ELF_MIN_ALIGN - 1))
static struct linux_binfmt elf_format = ;
#define BAD_ADDR(x) ((unsigned long)(x) >= TASK_SIZE)
static int set_brk(unsigned long start, unsigned long end)
static int padzero(unsigned long elf_bss)
#define STACK_ADD(sp, items) ((elf_addr_t __user *)(sp) + (items))
#define STACK_ROUND(sp, items) \
((15 + (unsigned long) ((sp) + (items))) &~ 15UL)
#define STACK_ALLOC(sp, len) ()
#define STACK_ADD(sp, items) ((elf_addr_t __user *)(sp) - (items))
#define STACK_ROUND(sp, items) \
(((unsigned long) (sp - items)) &~ 15UL)
#define STACK_ALLOC(sp, len) ()
#define ELF_BASE_PLATFORM NULL
static int
create_elf_tables(struct linux_binprm *bprm, struct elfhdr *exec,
unsigned long load_addr, unsigned long interp_load_addr)
static unsigned long elf_map(struct file *filep, unsigned long addr,
struct elf_phdr *eppnt, int prot, int type,
unsigned long total_size)
static unsigned long total_mapping_size(struct elf_phdr *cmds, int nr)
static unsigned long load_elf_interp(struct elfhdr *interp_elf_ex,
struct file *interpreter, unsigned long *interp_map_addr,
unsigned long no_base)
#define INTERPRETER_NONE 0
#define INTERPRETER_ELF 2
#define STACK_RND_MASK (0x7ff >> (PAGE_SHIFT - 12))
static unsigned long randomize_stack_top(unsigned long stack_top)
static int load_elf_binary(struct linux_binprm *bprm, struct pt_regs *regs)
static int load_elf_library(struct file *file)
static unsigned long vma_dump_size(struct vm_area_struct *vma,
unsigned long mm_flags)
struct memelfnote
;
static int notesize(struct memelfnote *en)
#define DUMP_WRITE(addr, nr, foffset)	\
do  while(0)
static int alignfile(struct file *file, loff_t *foffset)
static int writenote(struct memelfnote *men, struct file *file,
loff_t *foffset)
#undef DUMP_WRITE
static void fill_elf_header(struct elfhdr *elf, int segs,
u16 machine, u32 flags, u8 osabi)
static void fill_elf_note_phdr(struct elf_phdr *phdr, int sz, loff_t offset)
static void fill_note(struct memelfnote *note, const char *name, int type,
unsigned int sz, void *data)
static void fill_prstatus(struct elf_prstatus *prstatus,
struct task_struct *p, long signr)
static int fill_psinfo(struct elf_prpsinfo *psinfo, struct task_struct *p,
struct mm_struct *mm)
static void fill_auxv_note(struct memelfnote *note, struct mm_struct *mm)
struct elf_thread_core_info ;
struct elf_note_info ;
static void do_thread_regset_writeback(struct task_struct *task,
const struct user_regset *regset)
static int fill_thread_core_info(struct elf_thread_core_info *t,
const struct user_regset_view *view,
long signr, size_t *total)
static int fill_note_info(struct elfhdr *elf, int phdrs,
struct elf_note_info *info,
long signr, struct pt_regs *regs)
static size_t get_note_info_size(struct elf_note_info *info)
static int write_note_info(struct elf_note_info *info,
struct file *file, loff_t *foffset)
static void free_note_info(struct elf_note_info *info)
struct elf_thread_status
;
static int elf_dump_thread_status(long signr, struct elf_thread_status *t)
struct elf_note_info ;
static int elf_note_info_init(struct elf_note_info *info)
static int fill_note_info(struct elfhdr *elf, int phdrs,
struct elf_note_info *info,
long signr, struct pt_regs *regs)
static size_t get_note_info_size(struct elf_note_info *info)
static int write_note_info(struct elf_note_info *info,
struct file *file, loff_t *foffset)
static void free_note_info(struct elf_note_info *info)
static struct vm_area_struct *first_vma(struct task_struct *tsk,
struct vm_area_struct *gate_vma)
static struct vm_area_struct *next_vma(struct vm_area_struct *this_vma,
struct vm_area_struct *gate_vma)
static void fill_extnum_info(struct elfhdr *elf, struct elf_shdr *shdr4extnum,
elf_addr_t e_shoff, int segs)
static size_t elf_core_vma_data_size(struct vm_area_struct *gate_vma,
unsigned long mm_flags)
static int elf_core_dump(struct coredump_params *cprm)
static int __init init_elf_binfmt(void)
static void __exit exit_elf_binfmt(void)
core_initcall(init_elf_binfmt);
module_exit(exit_elf_binfmt);
MODULE_LICENSE("GPL");
