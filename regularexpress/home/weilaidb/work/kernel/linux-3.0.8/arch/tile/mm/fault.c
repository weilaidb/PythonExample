static noinline void force_sig_info_fault(const char *type, int si_signo,
int si_code, unsigned long address,
int fault_num,
struct task_struct *tsk,
struct pt_regs *regs)
SYSCALL_DEFINE2(cmpxchg_badaddr, unsigned long, address,
struct pt_regs *, regs)
static inline pmd_t *vmalloc_sync_one(pgd_t *pgd, unsigned long address)
static inline int vmalloc_fault(pgd_t *pgd, unsigned long address)
static void wait_for_migration(pte_t *pte)
static pgd_t *get_current_pgd(void)
static int handle_migrating_pte(pgd_t *pgd, int fault_num,
unsigned long address,
int is_kernel_mode, int write)
static int handle_page_fault(struct pt_regs *regs,
int fault_num,
int is_page_fault,
unsigned long address,
int write)
#define ics_panic(fmt, ...) do  while (0)
struct intvec_state do_page_fault_ics(struct pt_regs *regs, int fault_num,
unsigned long address,
unsigned long info)
void do_page_fault(struct pt_regs *regs, int fault_num,
unsigned long address, unsigned long write)
#if CHIP_HAS_TILE_DMA() || CHIP_HAS_SN_PROC()
static void handle_async_page_fault(struct pt_regs *regs,
struct async_tlb *async)
void do_async_page_fault(struct pt_regs *regs)
void vmalloc_sync_all(void)
