int __init sh64_tlb_init(void)
unsigned long long sh64_next_free_dtlb_entry(void)
unsigned long long sh64_get_wired_dtlb_entry(void)
int sh64_put_wired_dtlb_entry(unsigned long long entry)
void sh64_setup_tlb_slot(unsigned long long config_addr, unsigned long eaddr,
unsigned long asid, unsigned long paddr)
void sh64_teardown_tlb_slot(unsigned long long config_addr)
__attribute__ ((alias("__flush_tlb_slot")));
static int dtlb_entry;
static unsigned long long dtlb_entries[64];
void tlb_wire_entry(struct vm_area_struct *vma, unsigned long addr, pte_t pte)
void tlb_unwire_entry(void)
