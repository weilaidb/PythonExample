static struct  purge;
struct ia64_ctx ia64_ctx = ;
DEFINE_PER_CPU(u8, ia64_need_tlb_flush);
DEFINE_PER_CPU(u8, ia64_tr_num);
DEFINE_PER_CPU(u8, ia64_tr_used);
struct ia64_tr_entry *ia64_idtrs[NR_CPUS];
void __init
mmu_context_init (void)
void
wrap_mmu_context (struct mm_struct *mm)
struct spinaphore ;
static inline void spinaphore_init(struct spinaphore *ss, int val)
static inline void down_spin(struct spinaphore *ss)
static inline void up_spin(struct spinaphore *ss)
static struct spinaphore ptcg_sem;
static u16 nptcg = 1;
static int need_ptcg_sem = 1;
static int toolatetochangeptcgsem = 0;
static int __init
set_nptcg(char *str)
__setup("nptcg=", set_nptcg);
void
setup_ptcg_sem(int max_purges, int nptcg_from)
void
ia64_global_tlb_purge (struct mm_struct *mm, unsigned long start,
unsigned long end, unsigned long nbits)
void
local_flush_tlb_all (void)
void
flush_tlb_range (struct vm_area_struct *vma, unsigned long start,
unsigned long end)
EXPORT_SYMBOL(flush_tlb_range);
void __devinit
ia64_tlb_init (void)
static int is_tr_overlap(struct ia64_tr_entry *p, u64 va, u64 log_size)
int ia64_itr_entry(u64 target_mask, u64 va, u64 pte, u64 log_size)
EXPORT_SYMBOL_GPL(ia64_itr_entry);
void ia64_ptr_entry(u64 target_mask, int slot)
EXPORT_SYMBOL_GPL(ia64_ptr_entry);
