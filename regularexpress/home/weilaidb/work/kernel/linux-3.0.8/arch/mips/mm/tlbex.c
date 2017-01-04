extern void tlb_do_page_fault_0(void);
extern void tlb_do_page_fault_1(void);
static inline int r45k_bvahwbug(void)
static inline int r4k_250MHZhwbug(void)
static inline int __maybe_unused bcm1250_m3_war(void)
static inline int __maybe_unused r10000_llsc_war(void)
static int use_bbit_insns(void)
static int use_lwx_insns(void)
#if defined(CONFIG_CAVIUM_OCTEON_CVMSEG_SIZE) && \
CONFIG_CAVIUM_OCTEON_CVMSEG_SIZE > 0
static bool scratchpad_available(void)
static int scratchpad_offset(int i)
static bool scratchpad_available(void)
static int scratchpad_offset(int i)
static int __cpuinit m4kc_tlbp_war(void)
enum label_id ;
UASM_L_LA(_second_part)
UASM_L_LA(_leave)
UASM_L_LA(_vmalloc)
UASM_L_LA(_vmalloc_done)
UASM_L_LA(_tlbw_hazard)
UASM_L_LA(_split)
UASM_L_LA(_tlbl_goaround1)
UASM_L_LA(_tlbl_goaround2)
UASM_L_LA(_nopage_tlbl)
UASM_L_LA(_nopage_tlbs)
UASM_L_LA(_nopage_tlbm)
UASM_L_LA(_smp_pgtable_change)
UASM_L_LA(_r3000_write_probe_fail)
UASM_L_LA(_large_segbits_fault)
UASM_L_LA(_tlb_huge_update)
static inline void dump_handler(const u32 *handler, int count)
#define K0		26
#define K1		27
#define C0_INDEX	0, 0
#define C0_ENTRYLO0	2, 0
#define C0_TCBIND	2, 2
#define C0_ENTRYLO1	3, 0
#define C0_CONTEXT	4, 0
#define C0_PAGEMASK	5, 0
#define C0_BADVADDR	8, 0
#define C0_ENTRYHI	10, 0
#define C0_EPC		14, 0
#define C0_XCONTEXT	20, 0
# define GET_CONTEXT(buf, reg) UASM_i_MFC0(buf, reg, C0_XCONTEXT)
# define GET_CONTEXT(buf, reg) UASM_i_MFC0(buf, reg, C0_CONTEXT)
static u32 tlb_handler[128] __cpuinitdata;
static struct uasm_label labels[128] __cpuinitdata;
static struct uasm_reloc relocs[128] __cpuinitdata;
static int check_for_high_segbits __cpuinitdata;
static int check_for_high_segbits __cpuinitdata;
static unsigned int kscratch_used_mask __cpuinitdata;
static int __cpuinit allocate_kscratch(void)
static int scratch_reg __cpuinitdata;
static int pgd_reg __cpuinitdata;
enum vmalloc64_mode ;
extern unsigned long pgd_current[];
static void __cpuinit build_r3000_tlb_refill_handler(void)
static u32 final_handler[64] __cpuinitdata;
static void __cpuinit __maybe_unused build_tlb_probe_entry(u32 **p)
enum tlb_write_entry ;
static void __cpuinit build_tlb_write_entry(u32 **p, struct uasm_label **l,
struct uasm_reloc **r,
enum tlb_write_entry wmode)
static __cpuinit __maybe_unused void build_convert_pte_to_entrylo(u32 **p,
unsigned int reg)
static __cpuinit void build_restore_pagemask(u32 **p,
struct uasm_reloc **r,
unsigned int tmp,
enum label_id lid,
int restore_scratch)
static __cpuinit void build_huge_tlb_write_entry(u32 **p,
struct uasm_label **l,
struct uasm_reloc **r,
unsigned int tmp,
enum tlb_write_entry wmode,
int restore_scratch)
static void __cpuinit
build_is_huge_pte(u32 **p, struct uasm_reloc **r, unsigned int tmp,
unsigned int pmd, int lid)
static __cpuinit void build_huge_update_entries(u32 **p,
unsigned int pte,
unsigned int tmp)
static __cpuinit void build_huge_handler_tail(u32 **p,
struct uasm_reloc **r,
struct uasm_label **l,
unsigned int pte,
unsigned int ptr)
static void __cpuinit
build_get_pmde64(u32 **p, struct uasm_label **l, struct uasm_reloc **r,
unsigned int tmp, unsigned int ptr)
static void __cpuinit
build_get_pgd_vmalloc64(u32 **p, struct uasm_label **l, struct uasm_reloc **r,
unsigned int bvaddr, unsigned int ptr,
enum vmalloc64_mode mode)
static void __cpuinit __maybe_unused
build_get_pgde32(u32 **p, unsigned int tmp, unsigned int ptr)
static void __cpuinit build_adjust_context(u32 **p, unsigned int ctx)
static void __cpuinit build_get_ptep(u32 **p, unsigned int tmp, unsigned int ptr)
static void __cpuinit build_update_entries(u32 **p, unsigned int tmp,
unsigned int ptep)
struct mips_huge_tlb_info ;
static struct mips_huge_tlb_info __cpuinit
build_fast_tlb_refill_handler (u32 **p, struct uasm_label **l,
struct uasm_reloc **r, unsigned int tmp,
unsigned int ptr, int c0_scratch)
#define MIPS64_REFILL_INSNS 32
static void __cpuinit build_r4000_tlb_refill_handler(void)
#define FASTPATH_SIZE 128
u32 handle_tlbl[FASTPATH_SIZE] __cacheline_aligned;
u32 handle_tlbs[FASTPATH_SIZE] __cacheline_aligned;
u32 handle_tlbm[FASTPATH_SIZE] __cacheline_aligned;
u32 tlbmiss_handler_setup_pgd[16] __cacheline_aligned;
static void __cpuinit build_r4000_setup_pgd(void)
static void __cpuinit
iPTE_LW(u32 **p, unsigned int pte, unsigned int ptr)
static void __cpuinit
iPTE_SW(u32 **p, struct uasm_reloc **r, unsigned int pte, unsigned int ptr,
unsigned int mode)
static void __cpuinit
build_pte_present(u32 **p, struct uasm_reloc **r,
unsigned int pte, unsigned int ptr, enum label_id lid)
static void __cpuinit
build_make_valid(u32 **p, struct uasm_reloc **r, unsigned int pte,
unsigned int ptr)
static void __cpuinit
build_pte_writable(u32 **p, struct uasm_reloc **r,
unsigned int pte, unsigned int ptr, enum label_id lid)
static void __cpuinit
build_make_write(u32 **p, struct uasm_reloc **r, unsigned int pte,
unsigned int ptr)
static void __cpuinit
build_pte_modifiable(u32 **p, struct uasm_reloc **r,
unsigned int pte, unsigned int ptr, enum label_id lid)
static void __cpuinit
build_r3000_pte_reload_tlbwi(u32 **p, unsigned int pte, unsigned int tmp)
static void __cpuinit
build_r3000_tlb_reload_write(u32 **p, struct uasm_label **l,
struct uasm_reloc **r, unsigned int pte,
unsigned int tmp)
static void __cpuinit
build_r3000_tlbchange_handler_head(u32 **p, unsigned int pte,
unsigned int ptr)
static void __cpuinit build_r3000_tlb_load_handler(void)
static void __cpuinit build_r3000_tlb_store_handler(void)
static void __cpuinit build_r3000_tlb_modify_handler(void)
static void __cpuinit
build_r4000_tlbchange_handler_head(u32 **p, struct uasm_label **l,
struct uasm_reloc **r, unsigned int pte,
unsigned int ptr)
static void __cpuinit
build_r4000_tlbchange_handler_tail(u32 **p, struct uasm_label **l,
struct uasm_reloc **r, unsigned int tmp,
unsigned int ptr)
static void __cpuinit build_r4000_tlb_load_handler(void)
static void __cpuinit build_r4000_tlb_store_handler(void)
static void __cpuinit build_r4000_tlb_modify_handler(void)
void __cpuinit build_tlb_refill_handler(void)
void __cpuinit flush_tlb_handlers(void)
