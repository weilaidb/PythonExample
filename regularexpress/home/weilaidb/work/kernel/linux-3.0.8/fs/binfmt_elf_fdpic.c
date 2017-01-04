typedef char *elf_caddr_t;
MODULE_LICENSE("GPL");
static int load_elf_fdpic_binary(struct linux_binprm *, struct pt_regs *);
static int elf_fdpic_fetch_phdrs(struct elf_fdpic_params *, struct file *);
static int elf_fdpic_map_file(struct elf_fdpic_params *, struct file *,
struct mm_struct *, const char *);
static int create_elf_fdpic_tables(struct linux_binprm *, struct mm_struct *,
struct elf_fdpic_params *,
struct elf_fdpic_params *);
static int elf_fdpic_transfer_args_to_stack(struct linux_binprm *,
unsigned long *);
static int elf_fdpic_map_file_constdisp_on_uclinux(struct elf_fdpic_params *,
struct file *,
struct mm_struct *);
static int elf_fdpic_map_file_by_direct_mmap(struct elf_fdpic_params *,
struct file *, struct mm_struct *);
static int elf_fdpic_core_dump(struct coredump_params *cprm);
static struct linux_binfmt elf_fdpic_format = ;
static int __init init_elf_fdpic_binfmt(void)
static void __exit exit_elf_fdpic_binfmt(void)
core_initcall(init_elf_fdpic_binfmt);
module_exit(exit_elf_fdpic_binfmt);
static int is_elf_fdpic(struct elfhdr *hdr, struct file *file)
static int elf_fdpic_fetch_phdrs(struct elf_fdpic_params *params,
struct file *file)
static int load_elf_fdpic_binary(struct linux_binprm *bprm,
struct pt_regs *regs)
#define ELF_BASE_PLATFORM NULL
static int create_elf_fdpic_tables(struct linux_binprm *bprm,
struct mm_struct *mm,
struct elf_fdpic_params *exec_params,
struct elf_fdpic_params *interp_params)
static int elf_fdpic_transfer_args_to_stack(struct linux_binprm *bprm,
unsigned long *_sp)
static int elf_fdpic_map_file(struct elf_fdpic_params *params,
struct file *file,
struct mm_struct *mm,
const char *what)
static int elf_fdpic_map_file_constdisp_on_uclinux(
struct elf_fdpic_params *params,
struct file *file,
struct mm_struct *mm)
static int elf_fdpic_map_file_by_direct_mmap(struct elf_fdpic_params *params,
struct file *file,
struct mm_struct *mm)
static int maydump(struct vm_area_struct *vma, unsigned long mm_flags)
struct memelfnote
;
static int notesize(struct memelfnote *en)
#define DUMP_WRITE(addr, nr, foffset)	\
do  while(0)
static int alignfile(struct file *file, loff_t *foffset)
static int writenote(struct memelfnote *men, struct file *file,
loff_t *foffset)
#undef DUMP_WRITE
static inline void fill_elf_fdpic_header(struct elfhdr *elf, int segs)
static inline void fill_elf_note_phdr(struct elf_phdr *phdr, int sz, loff_t offset)
static inline void fill_note(struct memelfnote *note, const char *name, int type,
unsigned int sz, void *data)
static void fill_prstatus(struct elf_prstatus *prstatus,
struct task_struct *p, long signr)
static int fill_psinfo(struct elf_prpsinfo *psinfo, struct task_struct *p,
struct mm_struct *mm)
struct elf_thread_status
;
static int elf_dump_thread_status(long signr, struct elf_thread_status *t)
static void fill_extnum_info(struct elfhdr *elf, struct elf_shdr *shdr4extnum,
elf_addr_t e_shoff, int segs)
static int elf_fdpic_dump_segments(struct file *file, size_t *size,
unsigned long *limit, unsigned long mm_flags)
static int elf_fdpic_dump_segments(struct file *file, size_t *size,
unsigned long *limit, unsigned long mm_flags)
static size_t elf_core_vma_data_size(unsigned long mm_flags)
static int elf_fdpic_core_dump(struct coredump_params *cprm)
