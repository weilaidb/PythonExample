struct host_vm_change ;
#define INIT_HVC(mm, force) \
((struct host_vm_change) \
)
static int do_ops(struct host_vm_change *hvc, int end,
int finished)
static int add_mmap(unsigned long virt, unsigned long phys, unsigned long len,
unsigned int prot, struct host_vm_change *hvc)
static int add_munmap(unsigned long addr, unsigned long len,
struct host_vm_change *hvc)
static int add_mprotect(unsigned long addr, unsigned long len,
unsigned int prot, struct host_vm_change *hvc)
#define ADD_ROUND(n, inc) (((n) + (inc)) & ~((inc) - 1))
static inline int update_pte_range(pmd_t *pmd, unsigned long addr,
unsigned long end,
struct host_vm_change *hvc)
static inline int update_pmd_range(pud_t *pud, unsigned long addr,
unsigned long end,
struct host_vm_change *hvc)
static inline int update_pud_range(pgd_t *pgd, unsigned long addr,
unsigned long end,
struct host_vm_change *hvc)
void fix_range_common(struct mm_struct *mm, unsigned long start_addr,
unsigned long end_addr, int force)
int flush_tlb_kernel_range_common(unsigned long start, unsigned long end)
void flush_tlb_page(struct vm_area_struct *vma, unsigned long address)
pgd_t *pgd_offset_proc(struct mm_struct *mm, unsigned long address)
pud_t *pud_offset_proc(pgd_t *pgd, unsigned long address)
pmd_t *pmd_offset_proc(pud_t *pud, unsigned long address)
pte_t *pte_offset_proc(pmd_t *pmd, unsigned long address)
pte_t *addr_pte(struct task_struct *task, unsigned long addr)
void flush_tlb_all(void)
void flush_tlb_kernel_range(unsigned long start, unsigned long end)
void flush_tlb_kernel_vm(void)
void __flush_tlb_one(unsigned long addr)
static void fix_range(struct mm_struct *mm, unsigned long start_addr,
unsigned long end_addr, int force)
void flush_tlb_range(struct vm_area_struct *vma, unsigned long start,
unsigned long end)
void flush_tlb_mm_range(struct mm_struct *mm, unsigned long start,
unsigned long end)
void flush_tlb_mm(struct mm_struct *mm)
void force_flush_all(void)
