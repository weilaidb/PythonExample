#define _ASM_X86_XEN_PAGE_H
typedef struct xmaddr  xmaddr_t;
typedef struct xpaddr  xpaddr_t;
#define XMADDR(x)	((xmaddr_t) )
#define XPADDR(x)	((xpaddr_t) )
#define INVALID_P2M_ENTRY	(~0UL)
#define FOREIGN_FRAME_BIT	(1UL<<(BITS_PER_LONG-1))
#define IDENTITY_FRAME_BIT	(1UL<<(BITS_PER_LONG-2))
#define FOREIGN_FRAME(m)	((m) | FOREIGN_FRAME_BIT)
#define IDENTITY_FRAME(m)	((m) | IDENTITY_FRAME_BIT)
#define MAX_DOMAIN_PAGES						\
((unsigned long)((u64)CONFIG_XEN_MAX_DOMAIN_MEMORY * 1024 * 1024 * 1024 / PAGE_SIZE))
extern unsigned long *machine_to_phys_mapping;
extern unsigned long  machine_to_phys_nr;
extern unsigned long get_phys_to_machine(unsigned long pfn);
extern bool set_phys_to_machine(unsigned long pfn, unsigned long mfn);
extern bool __set_phys_to_machine(unsigned long pfn, unsigned long mfn);
extern unsigned long set_phys_range_identity(unsigned long pfn_s,
unsigned long pfn_e);
extern int m2p_add_override(unsigned long mfn, struct page *page,
bool clear_pte);
extern int m2p_remove_override(struct page *page, bool clear_pte);
extern struct page *m2p_find_override(unsigned long mfn);
extern unsigned long m2p_find_override_pfn(unsigned long mfn, unsigned long pfn);
extern int p2m_dump_show(struct seq_file *m, void *v);
static inline unsigned long pfn_to_mfn(unsigned long pfn)
static inline int phys_to_machine_mapping_valid(unsigned long pfn)
static inline unsigned long mfn_to_pfn(unsigned long mfn)
static inline xmaddr_t phys_to_machine(xpaddr_t phys)
static inline xpaddr_t machine_to_phys(xmaddr_t machine)
static inline unsigned long mfn_to_local_pfn(unsigned long mfn)
#define virt_to_machine(v)	(phys_to_machine(XPADDR(__pa(v))))
#define virt_to_pfn(v)          (PFN_DOWN(__pa(v)))
#define virt_to_mfn(v)		(pfn_to_mfn(virt_to_pfn(v)))
#define mfn_to_virt(m)		(__va(mfn_to_pfn(m) << PAGE_SHIFT))
static inline unsigned long pte_mfn(pte_t pte)
static inline pte_t mfn_pte(unsigned long page_nr, pgprot_t pgprot)
static inline pteval_t pte_val_ma(pte_t pte)
static inline pte_t __pte_ma(pteval_t x)
#define pmd_val_ma(v) ((v).pmd)
#define pud_val_ma(v) ((v).pgd.pgd)
#define pud_val_ma(v) ((v).pud)
#define __pmd_ma(x)	((pmd_t)  )
#define pgd_val_ma(x)	((x).pgd)
void xen_set_domain_pte(pte_t *ptep, pte_t pteval, unsigned domid);
xmaddr_t arbitrary_virt_to_machine(void *address);
unsigned long arbitrary_virt_to_mfn(void *vaddr);
void make_lowmem_page_readonly(void *vaddr);
void make_lowmem_page_readwrite(void *vaddr);
