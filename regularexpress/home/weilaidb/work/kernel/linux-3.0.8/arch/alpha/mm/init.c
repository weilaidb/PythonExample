extern void die_if_kernel(char *,struct pt_regs *,long);
static struct pcb_struct original_pcb;
pgd_t *
pgd_alloc(struct mm_struct *mm)
pmd_t *
__bad_pagetable(void)
pte_t
__bad_page(void)
static inline unsigned long
load_PCB(struct pcb_struct *pcb)
static inline void
switch_to_system_map(void)
int callback_init_done;
void * __init
callback_init(void * kernel_end)
void __init paging_init(void)
#if defined(CONFIG_ALPHA_GENERIC) || defined(CONFIG_ALPHA_SRM)
void
srm_paging_stop (void)
static void __init
printk_memory_info(void)
void __init
mem_init(void)
void
free_reserved_mem(void *start, void *end)
void
free_initmem(void)
void
free_initrd_mem(unsigned long start, unsigned long end)
