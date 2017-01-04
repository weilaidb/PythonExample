int nr_dcplb_miss[NR_CPUS], nr_icplb_miss[NR_CPUS];
int nr_dcplb_supv_miss[NR_CPUS], nr_icplb_supv_miss[NR_CPUS];
int nr_cplb_flush[NR_CPUS], nr_dcplb_prot[NR_CPUS];
#define MGR_ATTR __attribute__((l1_text))
#define MGR_ATTR
static inline void write_dcplb_data(int cpu, int idx, unsigned long data,
unsigned long addr)
static inline void write_icplb_data(int cpu, int idx, unsigned long data,
unsigned long addr)
static int icplb_rr_index[NR_CPUS] PDT_ATTR;
static int dcplb_rr_index[NR_CPUS] PDT_ATTR;
static int evict_one_icplb(int cpu)
static int evict_one_dcplb(int cpu)
MGR_ATTR static int icplb_miss(int cpu)
MGR_ATTR static int dcplb_miss(int cpu)
MGR_ATTR int cplb_hdr(int seqstat, struct pt_regs *regs)
