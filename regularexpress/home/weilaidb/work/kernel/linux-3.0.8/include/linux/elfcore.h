#define _LINUX_ELFCORE_H
struct elf_siginfo
;
typedef elf_greg_t greg_t;
typedef elf_gregset_t gregset_t;
typedef elf_fpregset_t fpregset_t;
typedef elf_fpxregset_t fpxregset_t;
#define NGREG ELF_NGREG
struct elf_prstatus
;
#define ELF_PRARGSZ	(80)
struct elf_prpsinfo
;
typedef struct elf_prstatus prstatus_t;
typedef struct elf_prpsinfo prpsinfo_t;
#define PRARGSZ ELF_PRARGSZ
static inline void elf_core_copy_regs(elf_gregset_t *elfregs, struct pt_regs *regs)
static inline void elf_core_copy_kernel_regs(elf_gregset_t *elfregs, struct pt_regs *regs)
static inline int elf_core_copy_task_regs(struct task_struct *t, elf_gregset_t* elfregs)
extern int dump_fpu (struct pt_regs *, elf_fpregset_t *);
static inline int elf_core_copy_task_fpregs(struct task_struct *t, struct pt_regs *regs, elf_fpregset_t *fpu)
static inline int elf_core_copy_task_xfpregs(struct task_struct *t, elf_fpxregset_t *xfpu)
extern Elf_Half elf_core_extra_phdrs(void);
extern int
elf_core_write_extra_phdrs(struct file *file, loff_t offset, size_t *size,
unsigned long limit);
extern int
elf_core_write_extra_data(struct file *file, size_t *size, unsigned long limit);
extern size_t elf_core_extra_data_size(void);
