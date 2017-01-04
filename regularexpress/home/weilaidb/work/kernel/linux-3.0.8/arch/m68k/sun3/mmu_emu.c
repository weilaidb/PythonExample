#undef DEBUG_MMU_EMU
#define DEBUG_PROM_MAPS
#define CONTEXTS_NUM		8
#define SEGMAPS_PER_CONTEXT_NUM 2048
#define PAGES_PER_SEGMENT	16
#define PMEGS_NUM		256
#define PMEG_MASK		0xFF
unsigned long m68k_vmalloc_end;
EXPORT_SYMBOL(m68k_vmalloc_end);
unsigned long pmeg_vaddr[PMEGS_NUM];
unsigned char pmeg_alloc[PMEGS_NUM];
unsigned char pmeg_ctx[PMEGS_NUM];
static struct mm_struct *ctx_alloc[CONTEXTS_NUM] = ;
static unsigned char ctx_avail = CONTEXTS_NUM-1;
unsigned long rom_pages[256];
void print_pte (pte_t pte)
void print_pte_vaddr (unsigned long vaddr)
void mmu_emu_init(unsigned long bootmem_end)
void clear_context(unsigned long context)
unsigned long get_free_context(struct mm_struct *mm)
inline void mmu_emu_map_pmeg (int context, int vaddr)
int mmu_emu_handle_fault (unsigned long vaddr, int read_flag, int kernel_fault)
