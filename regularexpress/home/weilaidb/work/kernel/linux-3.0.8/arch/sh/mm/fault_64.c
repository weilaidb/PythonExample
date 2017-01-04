inline void __do_tlb_refill(unsigned long address,
unsigned long long is_text_not_data, pte_t *pte)
static int handle_vmalloc_fault(struct mm_struct *mm,
unsigned long protection_flags,
unsigned long long textaccess,
unsigned long address)
static int handle_tlbmiss(struct mm_struct *mm,
unsigned long long protection_flags,
unsigned long long textaccess,
unsigned long address)
struct expevt_lookup ;
#define PRU (1<<9)
#define PRW (1<<8)
#define PRX (1<<7)
#define PRR (1<<6)
#define DIRTY (_PAGE_DIRTY | _PAGE_ACCESSED)
#define YOUNG (_PAGE_ACCESSED)
static struct expevt_lookup expevt_lookup_table = ;
asmlinkage int do_fast_page_fault(unsigned long long ssr_md,
unsigned long long expevt,
unsigned long address)
