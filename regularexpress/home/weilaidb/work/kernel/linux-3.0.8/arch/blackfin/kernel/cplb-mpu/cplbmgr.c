int page_mask_nelts;
int page_mask_order;
unsigned long *current_rwx_mask[NR_CPUS];
int nr_dcplb_miss[NR_CPUS], nr_icplb_miss[NR_CPUS];
int nr_icplb_supv_miss[NR_CPUS], nr_dcplb_prot[NR_CPUS];
int nr_cplb_flush[NR_CPUS];
#define MGR_ATTR __attribute__((l1_text))
#define MGR_ATTR
static inline int faulting_cplb_index(int status)
static inline int write_permitted(int status, unsigned long data)
static int icplb_rr_index[NR_CPUS], dcplb_rr_index[NR_CPUS];
MGR_ATTR static int evict_one_icplb(unsigned int cpu)
MGR_ATTR static int evict_one_dcplb(unsigned int cpu)
MGR_ATTR static noinline int dcplb_miss(unsigned int cpu)
MGR_ATTR static noinline int icplb_miss(unsigned int cpu)
MGR_ATTR static noinline int dcplb_protection_fault(unsigned int cpu)
MGR_ATTR int cplb_hdr(int seqstat, struct pt_regs *regs)
void flush_switched_cplbs(unsigned int cpu)
void set_mask_dcplbs(unsigned long *masks, unsigned int cpu)
