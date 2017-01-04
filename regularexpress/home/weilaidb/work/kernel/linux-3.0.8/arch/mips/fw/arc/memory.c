#undef DEBUG
#define ARC_PAGE_SHIFT	12
struct linux_mdesc * __init ArcGetMemoryDescriptor(struct linux_mdesc *Current)
static char *arcs_mtypes[8] = ;
static char *arc_mtypes[8] = ;
#define mtypes(a) (prom_flags & PROM_FLAG_ARCS) ? arcs_mtypes[a.arcs] \
: arc_mtypes[a.arc]
static inline int memtype_classify_arcs(union linux_memtypes type)
static inline int memtype_classify_arc(union linux_memtypes type)
static int __init prom_memtype_classify(union linux_memtypes type)
void __init prom_meminit(void)
void __init prom_free_prom_memory(void)
