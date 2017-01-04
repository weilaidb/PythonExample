unsigned long kern_linear_pte_xor[2] __read_mostly;
unsigned long kpte_linear_bitmap[KPTE_BITMAP_BYTES / sizeof(unsigned long)];
extern struct tsb swapper_4m_tsb[KERNEL_TSB4M_NENTRIES];
#define MAX_BANKS	32
static struct linux_prom64_registers pavail[MAX_BANKS] __devinitdata;
static int pavail_ents __devinitdata;
static int cmp_p64(const void *a, const void *b)
static void __init read_obp_memory(const char *property,
struct linux_prom64_registers *regs,
int *num_ents)
unsigned long sparc64_valid_addr_bitmap[VALID_ADDR_BITMAP_BYTES /
sizeof(unsigned long)];
EXPORT_SYMBOL(sparc64_valid_addr_bitmap);
unsigned long kern_base __read_mostly;
unsigned long kern_size __read_mostly;
extern unsigned long sparc_ramdisk_image64;
extern unsigned int sparc_ramdisk_image;
extern unsigned int sparc_ramdisk_size;
struct page *mem_map_zero __read_mostly;
EXPORT_SYMBOL(mem_map_zero);
unsigned int sparc64_highest_unlocked_tlb_ent __read_mostly;
unsigned long sparc64_kern_pri_context __read_mostly;
unsigned long sparc64_kern_pri_nuc_bits __read_mostly;
unsigned long sparc64_kern_sec_context __read_mostly;
int num_kernel_image_mappings;
atomic_t dcpage_flushes = ATOMIC_INIT(0);
atomic_t dcpage_flushes_xcall = ATOMIC_INIT(0);
inline void flush_dcache_page_impl(struct page *page)
#define PG_dcache_dirty		PG_arch_1
#define PG_dcache_cpu_shift	32UL
#define PG_dcache_cpu_mask	\
((1UL<<ilog2(roundup_pow_of_two(NR_CPUS)))-1UL)
#define dcache_dirty_cpu(page) \
(((page)->flags >> PG_dcache_cpu_shift) & PG_dcache_cpu_mask)
static inline void set_dcache_dirty(struct page *page, int this_cpu)
static inline void clear_dcache_dirty_cpu(struct page *page, unsigned long cpu)
static inline void tsb_insert(struct tsb *ent, unsigned long tag, unsigned long pte)
unsigned long _PAGE_ALL_SZ_BITS __read_mostly;
unsigned long _PAGE_SZBITS __read_mostly;
static void flush_dcache(unsigned long pfn)
void update_mmu_cache(struct vm_area_struct *vma, unsigned long address, pte_t *ptep)
void flush_dcache_page(struct page *page)
EXPORT_SYMBOL(flush_dcache_page);
void __kprobes flush_icache_range(unsigned long start, unsigned long end)
EXPORT_SYMBOL(flush_icache_range);
void mmu_info(struct seq_file *m)
struct linux_prom_translation prom_trans[512] __read_mostly;
unsigned int prom_trans_ents __read_mostly;
unsigned long kern_locked_tte_data;
static inline int in_obp_range(unsigned long vaddr)
static int cmp_ptrans(const void *a, const void *b)
static void __init read_obp_translations(void)
static void __init hypervisor_tlb_lock(unsigned long vaddr,
unsigned long pte,
unsigned long mmu)
static unsigned long kern_large_tte(unsigned long paddr);
static void __init remap_kernel(void)
static void __init inherit_prom_mappings(void)
void prom_world(int enter)
void __flush_dcache_range(unsigned long start, unsigned long end)
EXPORT_SYMBOL(__flush_dcache_range);
DEFINE_SPINLOCK(ctx_alloc_lock);
unsigned long tlb_context_cache = CTX_FIRST_VERSION - 1;
#define MAX_CTX_NR	(1UL << CTX_NR_BITS)
#define CTX_BMAP_SLOTS	BITS_TO_LONGS(MAX_CTX_NR)
DECLARE_BITMAP(mmu_context_bmap, MAX_CTX_NR);
void get_new_mmu_context(struct mm_struct *mm)
static int numa_enabled = 1;
static int numa_debug;
static int __init early_numa(char *p)
early_param("numa", early_numa);
#define numadbg(f, a...) \
do  while (0)
static void __init find_ramdisk(unsigned long phys_base)
struct node_mem_mask ;
static struct node_mem_mask node_masks[MAX_NUMNODES];
static int num_node_masks;
int numa_cpu_lookup_table[NR_CPUS];
cpumask_t numa_cpumask_lookup_table[MAX_NUMNODES];
struct mdesc_mblock ;
static struct mdesc_mblock *mblocks;
static int num_mblocks;
static unsigned long ra_to_pa(unsigned long addr)
static int find_node(unsigned long addr)
u64 memblock_nid_range(u64 start, u64 end, int *nid)
u64 memblock_nid_range(u64 start, u64 end, int *nid)
static void __init allocate_node_data(int nid)
static void init_node_masks_nonnuma(void)
struct pglist_data *node_data[MAX_NUMNODES];
EXPORT_SYMBOL(numa_cpu_lookup_table);
EXPORT_SYMBOL(numa_cpumask_lookup_table);
EXPORT_SYMBOL(node_data);
struct mdesc_mlgroup ;
static struct mdesc_mlgroup *mlgroups;
static int num_mlgroups;
static int scan_pio_for_cfg_handle(struct mdesc_handle *md, u64 pio,
u32 cfg_handle)
static int scan_arcs_for_cfg_handle(struct mdesc_handle *md, u64 grp,
u32 cfg_handle)
int of_node_to_nid(struct device_node *dp)
static void __init add_node_ranges(void)
static int __init grab_mlgroups(struct mdesc_handle *md)
static int __init grab_mblocks(struct mdesc_handle *md)
static void __init numa_parse_mdesc_group_cpus(struct mdesc_handle *md,
u64 grp, cpumask_t *mask)
static struct mdesc_mlgroup * __init find_mlgroup(u64 node)
static int __init numa_attach_mlgroup(struct mdesc_handle *md, u64 grp,
int index)
static int __init numa_parse_mdesc_group(struct mdesc_handle *md, u64 grp,
int index)
static int __init numa_parse_mdesc(void)
static int __init numa_parse_jbus(void)
static int __init numa_parse_sun4u(void)
static int __init bootmem_init_numa(void)
static int bootmem_init_numa(void)
static void __init bootmem_init_nonnuma(void)
static void __init reserve_range_in_node(int nid, unsigned long start,
unsigned long end)
static void __init trim_reserved_in_node(int nid)
static void __init bootmem_init_one_node(int nid)
static unsigned long __init bootmem_init(unsigned long phys_base)
static struct linux_prom64_registers pall[MAX_BANKS] __initdata;
static int pall_ents __initdata;
static unsigned long __ref kernel_map_range(unsigned long pstart,
unsigned long pend, pgprot_t prot)
extern unsigned int kvmap_linear_patch[1];
static void __init mark_kpte_bitmap(unsigned long start, unsigned long end)
static void __init init_kpte_bitmap(void)
static void __init kernel_physical_mapping_init(void)
void kernel_map_pages(struct page *page, int numpages, int enable)
unsigned long __init find_ecache_flush_span(unsigned long size)
static void __init tsb_phys_patch(void)
#define NUM_KTSB_DESCR	2
#define NUM_KTSB_DESCR	1
static struct hv_tsb_descr ktsb_descr[NUM_KTSB_DESCR];
extern struct tsb swapper_tsb[KERNEL_TSB_NENTRIES];
static void patch_one_ktsb_phys(unsigned int *start, unsigned int *end, unsigned long pa)
static void ktsb_phys_patch(void)
static void __init sun4v_ktsb_init(void)
void __cpuinit sun4v_ktsb_register(void)
static unsigned long last_valid_pfn;
pgd_t swapper_pg_dir[2048];
static void sun4u_pgprot_init(void);
static void sun4v_pgprot_init(void);
void __init paging_init(void)
int __devinit page_in_phys_avail(unsigned long paddr)
static struct linux_prom64_registers pavail_rescan[MAX_BANKS] __initdata;
static int pavail_rescan_ents __initdata;
static void __init setup_valid_addr_bitmap_from_pavail(unsigned long *bitmap)
static void __init patch_tlb_miss_handler_bitmap(void)
void __init mem_init(void)
void free_initmem(void)
void free_initrd_mem(unsigned long start, unsigned long end)
#define _PAGE_CACHE_4U	(_PAGE_CP_4U | _PAGE_CV_4U)
#define _PAGE_CACHE_4V	(_PAGE_CP_4V | _PAGE_CV_4V)
#define __DIRTY_BITS_4U	 (_PAGE_MODIFIED_4U | _PAGE_WRITE_4U | _PAGE_W_4U)
#define __DIRTY_BITS_4V	 (_PAGE_MODIFIED_4V | _PAGE_WRITE_4V | _PAGE_W_4V)
#define __ACCESS_BITS_4U (_PAGE_ACCESSED_4U | _PAGE_READ_4U | _PAGE_R)
#define __ACCESS_BITS_4V (_PAGE_ACCESSED_4V | _PAGE_READ_4V | _PAGE_R)
pgprot_t PAGE_KERNEL __read_mostly;
EXPORT_SYMBOL(PAGE_KERNEL);
pgprot_t PAGE_KERNEL_LOCKED __read_mostly;
pgprot_t PAGE_COPY __read_mostly;
pgprot_t PAGE_SHARED __read_mostly;
EXPORT_SYMBOL(PAGE_SHARED);
unsigned long pg_iobits __read_mostly;
unsigned long _PAGE_IE __read_mostly;
EXPORT_SYMBOL(_PAGE_IE);
unsigned long _PAGE_E __read_mostly;
EXPORT_SYMBOL(_PAGE_E);
unsigned long _PAGE_CACHE __read_mostly;
EXPORT_SYMBOL(_PAGE_CACHE);
unsigned long vmemmap_table[VMEMMAP_SIZE];
int __meminit vmemmap_populate(struct page *start, unsigned long nr, int node)
static void prot_init_common(unsigned long page_none,
unsigned long page_shared,
unsigned long page_copy,
unsigned long page_readonly,
unsigned long page_exec_bit)
static void __init sun4u_pgprot_init(void)
static void __init sun4v_pgprot_init(void)
unsigned long pte_sz_bits(unsigned long sz)
pte_t mk_pte_io(unsigned long page, pgprot_t prot, int space, unsigned long page_size)
static unsigned long kern_large_tte(unsigned long paddr)
void __flush_tlb_all(void)
