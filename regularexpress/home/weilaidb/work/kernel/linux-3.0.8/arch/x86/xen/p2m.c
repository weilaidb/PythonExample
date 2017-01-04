static void __init m2p_override_init(void);
unsigned long xen_max_p2m_pfn __read_mostly;
#define P2M_PER_PAGE		(PAGE_SIZE / sizeof(unsigned long))
#define P2M_MID_PER_PAGE	(PAGE_SIZE / sizeof(unsigned long *))
#define P2M_TOP_PER_PAGE	(PAGE_SIZE / sizeof(unsigned long **))
#define MAX_P2M_PFN		(P2M_TOP_PER_PAGE * P2M_MID_PER_PAGE * P2M_PER_PAGE)
static RESERVE_BRK_ARRAY(unsigned long, p2m_missing, P2M_PER_PAGE);
static RESERVE_BRK_ARRAY(unsigned long *, p2m_mid_missing, P2M_MID_PER_PAGE);
static RESERVE_BRK_ARRAY(unsigned long, p2m_mid_missing_mfn, P2M_MID_PER_PAGE);
static RESERVE_BRK_ARRAY(unsigned long **, p2m_top, P2M_TOP_PER_PAGE);
static RESERVE_BRK_ARRAY(unsigned long, p2m_top_mfn, P2M_TOP_PER_PAGE);
static RESERVE_BRK_ARRAY(unsigned long *, p2m_top_mfn_p, P2M_TOP_PER_PAGE);
static RESERVE_BRK_ARRAY(unsigned long, p2m_identity, P2M_PER_PAGE);
RESERVE_BRK(p2m_mid, PAGE_SIZE * (MAX_DOMAIN_PAGES / (P2M_PER_PAGE * P2M_MID_PER_PAGE)));
RESERVE_BRK(p2m_mid_mfn, PAGE_SIZE * (MAX_DOMAIN_PAGES / (P2M_PER_PAGE * P2M_MID_PER_PAGE)));
RESERVE_BRK(p2m_mid_identity, PAGE_SIZE * 2 * 3);
static inline unsigned p2m_top_index(unsigned long pfn)
static inline unsigned p2m_mid_index(unsigned long pfn)
static inline unsigned p2m_index(unsigned long pfn)
static void p2m_top_init(unsigned long ***top)
static void p2m_top_mfn_init(unsigned long *top)
static void p2m_top_mfn_p_init(unsigned long **top)
static void p2m_mid_init(unsigned long **mid)
static void p2m_mid_mfn_init(unsigned long *mid)
static void p2m_init(unsigned long *p2m)
void __ref xen_build_mfn_list_list(void)
void xen_setup_mfn_list_list(void)
void __init xen_build_dynamic_phys_to_machine(void)
unsigned long get_phys_to_machine(unsigned long pfn)
EXPORT_SYMBOL_GPL(get_phys_to_machine);
static void *alloc_p2m_page(void)
static void free_p2m_page(void *p)
static bool alloc_p2m(unsigned long pfn)
static bool __init __early_alloc_p2m(unsigned long pfn)
unsigned long __init set_phys_range_identity(unsigned long pfn_s,
unsigned long pfn_e)
bool __set_phys_to_machine(unsigned long pfn, unsigned long mfn)
bool set_phys_to_machine(unsigned long pfn, unsigned long mfn)
#define M2P_OVERRIDE_HASH_SHIFT	10
#define M2P_OVERRIDE_HASH	(1 << M2P_OVERRIDE_HASH_SHIFT)
static RESERVE_BRK_ARRAY(struct list_head, m2p_overrides, M2P_OVERRIDE_HASH);
static DEFINE_SPINLOCK(m2p_override_lock);
static void __init m2p_override_init(void)
static unsigned long mfn_hash(unsigned long mfn)
int m2p_add_override(unsigned long mfn, struct page *page, bool clear_pte)
EXPORT_SYMBOL_GPL(m2p_add_override);
int m2p_remove_override(struct page *page, bool clear_pte)
EXPORT_SYMBOL_GPL(m2p_remove_override);
struct page *m2p_find_override(unsigned long mfn)
unsigned long m2p_find_override_pfn(unsigned long mfn, unsigned long pfn)
EXPORT_SYMBOL_GPL(m2p_find_override_pfn);
int p2m_dump_show(struct seq_file *m, void *v)
