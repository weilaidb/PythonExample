static int map_pte_fn(pte_t *pte, struct page *pmd_page,
unsigned long addr, void *data)
static int unmap_pte_fn(pte_t *pte, struct page *pmd_page,
unsigned long addr, void *data)
int arch_gnttab_map_shared(unsigned long *frames, unsigned long nr_gframes,
unsigned long max_nr_gframes,
struct grant_entry **__shared)
void arch_gnttab_unmap_shared(struct grant_entry *shared,
unsigned long nr_gframes)
