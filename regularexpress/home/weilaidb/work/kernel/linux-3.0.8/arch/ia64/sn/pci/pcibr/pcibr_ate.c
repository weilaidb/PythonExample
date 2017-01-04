int pcibr_invalidate_ate;
static void mark_ate(struct ate_resource *ate_resource, int start, int number,
u64 value)
static int find_free_ate(struct ate_resource *ate_resource, int start,
int count)
static inline void free_ate_resource(struct ate_resource *ate_resource,
int start)
static inline int alloc_ate_resource(struct ate_resource *ate_resource,
int ate_needed)
int pcibr_ate_alloc(struct pcibus_info *pcibus_info, int count)
static inline u64 __iomem *pcibr_ate_addr(struct pcibus_info *pcibus_info,
int ate_index)
void inline
ate_write(struct pcibus_info *pcibus_info, int ate_index, int count,
volatile u64 ate)
void pcibr_ate_free(struct pcibus_info *pcibus_info, int index)
