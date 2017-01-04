static void on_each_cpu_mask(void (*func)(void *), void *info, int wait,
const struct cpumask *mask)
struct tlb_args ;
static inline void ipi_flush_tlb_all(void *ignored)
static inline void ipi_flush_tlb_mm(void *arg)
static inline void ipi_flush_tlb_page(void *arg)
static inline void ipi_flush_tlb_kernel_page(void *arg)
static inline void ipi_flush_tlb_range(void *arg)
static inline void ipi_flush_tlb_kernel_range(void *arg)
void flush_tlb_all(void)
void flush_tlb_mm(struct mm_struct *mm)
void flush_tlb_page(struct vm_area_struct *vma, unsigned long uaddr)
void flush_tlb_kernel_page(unsigned long kaddr)
void flush_tlb_range(struct vm_area_struct *vma,
unsigned long start, unsigned long end)
void flush_tlb_kernel_range(unsigned long start, unsigned long end)
