#define MM_MIGRATE_H
extern int flush_and_install_context(HV_PhysAddr page_table, HV_PTE access,
HV_ASID asid,
const unsigned long *cpumask);
extern int homecache_migrate_stack_and_flush(pte_t stack_pte, unsigned long va,
size_t length, pte_t *stack_ptep,
const struct cpumask *cache_cpumask,
const struct cpumask *tlb_cpumask,
HV_Remote_ASID *asids,
int asidcount);
